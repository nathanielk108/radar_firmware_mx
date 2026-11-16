add_library(radar_devices STATIC
  ad4683.c
)

target_include_directories(radar_devices PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(radar_devices PUBLIC
  radar_platform
)
