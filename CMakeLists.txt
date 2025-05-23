cmake_minimum_required(VERSION 3.10)

project(MyProgram)

message("${PROJECT_NAME}")

set(SOURSES "main.cpp"
            "lib.cpp")

add_executable(${PROJECT_NAME} ${SOURSES})