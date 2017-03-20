cmake_minimum_required(VERSION 2.8)

project(AddressBook)

set(SOURCE AddressBook.cpp Contact.cpp AddressBook_UT.cpp Contact_UT)

add_definitions(--std=c++11)

enable_testing()
find_package(GTest REQUIRED)


include_directories(${PROJECT_NAME} ${GTEST_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${SOURCE})

target_link_libraries(${PROJECT_NAME} gtest gtest_main pthread)
