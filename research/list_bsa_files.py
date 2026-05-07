"""List files in an Oblivion BSA archive (format version 103/104).

Usage: python list_bsa_files.py <bsa_path> [filter_substring]

Bethesda BSA v103/104 layout (Oblivion):
  Header (36 bytes):
    bsa_id      'BSA\\0'
    version     u32
    folder_offset u32
    archive_flags u32
    folder_count u32
    file_count u32
    total_folder_name_length u32
    total_file_name_length u32
    file_flags u32
  Folder records (folder_count * 16):
    name_hash u64
    file_count u32
    name_offset u32 (offset from start of file)
  Folder name + file records section starts at folder_offset
    For each folder: BSTRING (length byte + name + null) then file_count * 16 bytes
      file: name_hash u64, size u32 (high bit + 0x40000000 means default-compressed inverted), data_offset u32
  File names: total_file_name_length bytes of null-terminated names
"""
import struct
import sys
from pathlib import Path


def list_bsa(path: str, filter_sub: str = ''):
    data = open(path, 'rb').read()
    bsa_id, version, folder_offset, archive_flags, folder_count, file_count, total_folder_name_len, total_file_name_len, file_flags = struct.unpack('<4sIIIIIIII', data[:36])
    if bsa_id != b'BSA\x00':
        print(f"Not a BSA: {path}")
        return
    print(f"BSA: {path}")
    print(f"  version={version} folders={folder_count} files={file_count} archive_flags=0x{archive_flags:08X}")

    has_folder_names = bool(archive_flags & 0x1)
    has_file_names = bool(archive_flags & 0x2)
    files_compressed_default = bool(archive_flags & 0x4)

    # Read folder records (each is 16 bytes for v103, the typical Oblivion BSA)
    folder_records = []
    cursor = 36
    for _ in range(folder_count):
        name_hash, fcount, name_offset = struct.unpack('<QII', data[cursor:cursor+16])
        folder_records.append({'hash': name_hash, 'fcount': fcount, 'name_offset': name_offset})
        cursor += 16

    # Read folder names (preceded by length byte) + file records
    # The interleaved section starts right after the folder records.
    folders = []
    pos = 36 + 16 * folder_count
    for fr in folder_records:
        if has_folder_names:
            name_len = data[pos]
            pos += 1
            name = data[pos:pos + name_len - 1].decode('latin1', errors='replace')  # excludes null
            pos += name_len  # includes null terminator
        else:
            name = ''
        files = []
        for _ in range(fr['fcount']):
            f_hash, f_size, f_offset = struct.unpack('<QII', data[pos:pos+16])
            invert = bool(f_size & 0x40000000)
            f_size_actual = f_size & 0x3FFFFFFF
            compressed = files_compressed_default ^ invert
            files.append({'hash': f_hash, 'size': f_size_actual, 'offset': f_offset, 'compressed': compressed})
            pos += 16
        folders.append({'name': name, 'files': files})

    # Read file names — null-terminated strings
    file_names = []
    fn_pos = pos
    for _ in range(file_count):
        end = data.index(b'\x00', fn_pos)
        file_names.append(data[fn_pos:end].decode('latin1', errors='replace'))
        fn_pos = end + 1

    # Match file names back to folders in order
    fn_idx = 0
    matched = 0
    for folder in folders:
        for finfo in folder['files']:
            full = folder['name'] + '\\' + file_names[fn_idx]
            fn_idx += 1
            if filter_sub and filter_sub.lower() not in full.lower():
                continue
            sys.stdout.buffer.write(f"  [{finfo['size']:>9} {'C' if finfo['compressed'] else ' '}] {full}\n".encode('utf-8', errors='replace'))
            matched += 1
    print(f"\nTotal files: {file_count}; matched filter: {matched}")


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("Usage: python list_bsa_files.py <bsa> [filter]")
        sys.exit(1)
    list_bsa(sys.argv[1], sys.argv[2] if len(sys.argv) > 2 else '')
