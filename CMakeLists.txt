cmake_minimum_required(VERSION 3.14) # GoogleTest requires CMake>= 3.14 and at least C++14
set(CMAKE_CXX_STANDARD 14)

set(PROJECT_NAME_STR person) # definitions for the project 
project(${PROJECT_NAME_STR})

# ###################################################
# ## OPTION 1: Fetch the googleTest code online 
# ###################################################
# # Needed to change default about timestamps in the downloaded stuff
# if(POLICY CMP0135) 
#   cmake_policy(SET CMP0135 NEW)
# 	set(CMAKE_POLICY_DEFAULT_CMP0135 NEW)
# endif()

# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
# )
# # For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)
# find_package(PkgConfig)
# pkg_search_module(GTEST REQUIRED gtest_main)
# ###################################################
# ## END OPTION 1: Fetch the googleTest code online 
# ###################################################


###################################################
## OPTION 2: Clone the google test repo locally 
#  git clone https://github.com/google/googletest
###################################################
add_subdirectory(googletest) # add googletest subdirectory
include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>
###################################################
## END OPTION 2: Clone the google test repo locally 
###################################################

include_directories(src/share) # this is so we can #include "classX.hpp"

# this builds the executable with the main entry in main()
add_executable(${PROJECT_NAME_STR}_exec 
  src/main.cpp 
  src/share/person.cpp      # EDIT THIS 
)

enable_testing()
add_executable(${PROJECT_NAME_STR}_test 
  src/share/person.cpp tests/utest-Person.cpp # EDIT THIS
)

target_link_libraries(${PROJECT_NAME_STR}_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME_STR}_test )
