# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QT-Archivos_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QT-Archivos_autogen.dir\\ParseCache.txt"
  "QT-Archivos_autogen"
  )
endif()