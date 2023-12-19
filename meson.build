project('ShAm', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])
sources = [
  'src/main.cpp',
  'src/constructsh.cpp',
  'src/compilesh.cpp'
]

headers = [
  'src/sham.h',
]
exe = executable('sham', sources, include_directories: '.',
  install : true)

install_data('doc/man/sham.1.gz', install_dir : '/usr/local/man/man1/')


test('basic', exe)
