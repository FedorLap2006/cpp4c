demos = [
  'smartptr'
]

foreach demo_name : demos
  exe = executable(demo_name, [demo_name + '.c'],
    link_with : [cpp4c], include_directories : include_dir,
  )
endforeach

