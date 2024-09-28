# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/LandscapeGUI_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/LandscapeGUI_autogen.dir/ParseCache.txt"
  "LandscapeGUI_autogen"
  )
endif()
