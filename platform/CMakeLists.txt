add_library(radar_platform STATIC
  platform.c
)

target_include_directories(radar_platform PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(radar_platform PUBLIC
  stm32cubemx
)
