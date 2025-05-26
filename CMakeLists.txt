cmake_minimum_required(VERSION 3.10)

project(MyProgram)

message("${PROJECT_NAME}")

set(SOURSES "main.cpp"
            "list.cpp")

add_executable(${PROJECT_NAME} ${SOURSES})