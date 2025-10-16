# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_spoofing_attack_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED spoofing_attack_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(spoofing_attack_FOUND FALSE)
  elseif(NOT spoofing_attack_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(spoofing_attack_FOUND FALSE)
  endif()
  return()
endif()
set(_spoofing_attack_CONFIG_INCLUDED TRUE)

# output package information
if(NOT spoofing_attack_FIND_QUIETLY)
  message(STATUS "Found spoofing_attack: 0.1.0 (${spoofing_attack_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'spoofing_attack' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${spoofing_attack_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(spoofing_attack_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${spoofing_attack_DIR}/${_extra}")
endforeach()
