cmake_minimum_required(VERSION 2.6)
project(dlt-app)

find_package(PkgConfig)
pkg_check_modules(DLT REQUIRED automotive-dlt)

include_directories(
    ${DLT_INCLUDE_DIRS}
)

set(dlt_app_SRCS dlt-application.c)
add_executable(dlt-appl ${dlt_app_SRCS})
target_link_libraries(dlt-appl ${DLT_LIBRARIES})
set_target_properties(dlt-appl PROPERTIES LINKER_LANGUAGE C)

install(TARGETS dlt-appl
        RUNTIME DESTINATION bin
        COMPONENT base)