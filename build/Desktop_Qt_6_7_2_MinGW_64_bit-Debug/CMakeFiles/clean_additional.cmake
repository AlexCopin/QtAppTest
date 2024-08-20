# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtAppTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtAppTest_autogen.dir\\ParseCache.txt"
  "QtAppTest_autogen"
  )
endif()
