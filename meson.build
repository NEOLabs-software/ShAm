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

test('basic', exe)
