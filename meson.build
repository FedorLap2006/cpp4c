project('cpp4c', 'c', version : '0.1.0', license : 'MIT')

include_dir = include_directories('include')
install_headers(
  'include/cpp4c/smartptr.h',
  subdir : 'cpp4c'
)

cpp4c = library('cpp4c', 
  'src/smartptr.c',
  include_directories : include_dir
)

build_demos = get_option('build_demos')

if build_demos
  subdir('demos')
endif 
