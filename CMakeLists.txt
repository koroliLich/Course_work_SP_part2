project(Calculator)

set(SET_LIB calculator.cpp hello.cpp)

add_library(lib STATIC ${SET_LIB})

add_executable(main main.cpp)

target_link_libraries(main lib)
