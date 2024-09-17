# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HolaaaMundo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HolaaaMundo_autogen.dir\\ParseCache.txt"
  "HolaaaMundo_autogen"
  )
endif()
