cmake_minimum_required (VERSION 3.8)

project ("backend")

# Platform-specific settings
if (WIN32)
  if (POLICY CMP0141)
    cmake_policy(SET CMP0141 NEW)
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT 
      "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>"
    )
  endif()
endif()

# Add source files to executable
add_executable (chess 
  "chess.cpp" 
  "chess.h" 
  "pieces.h" 
  "bitboard.h" 
  "bitboard.cpp" 
  "utils.h"
 "chess_constants.h" "square.h" "white_king.h" "white_king.cpp")

# Set C++ standard
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET chess PROPERTY CXX_STANDARD 20)
endif()

# Compiler-specific flags
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  target_compile_options(chess PRIVATE -Wall -Wextra -pedantic)
endif()

# TODO: Add tests and install targets if needed.

