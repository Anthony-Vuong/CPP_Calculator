cmake_minimum_required(VERSION 3.22.1)

project(CPP_Calculator)

set(CMAKE_CXX_STANDARD 20)


set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests test.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} Threads::Threads)



