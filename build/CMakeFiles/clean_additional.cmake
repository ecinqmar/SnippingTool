# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Snippingtool_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Snippingtool_autogen.dir/ParseCache.txt"
  "Snippingtool_autogen"
  )
endif()
