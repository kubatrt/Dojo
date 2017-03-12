cmake_minimum_required(VERSION 2.8)

project(AddressBook)

set(SOURCE AddressBook.cpp AddressBook.hpp)

add_executable(${PROJECT_NAME} ${SOURCE})
