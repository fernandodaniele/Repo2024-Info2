# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\UART-FullDuplex_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\UART-FullDuplex_autogen.dir\\ParseCache.txt"
  "UART-FullDuplex_autogen"
  )
endif()
