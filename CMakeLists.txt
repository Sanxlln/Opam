cmake_minimum_required(VERSION 3.10)

project(MyProgram)

message("${PROJECT_NAME}")

# Основні файли проєкту
set(SOURCES
    main.cpp
    list.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

# Файли тестів
set(SOURCES_TEST
    empty_test.cpp
    erase_back_test.cpp
    erase_front_test.cpp
    insert_back_test.cpp
    insert_front_test.cpp
    iterator_tests.cpp
    size_test.cpp
)

enable_testing()

# Створення окремого executable для кожного тесту і додавання його у список тестів CTest
foreach(test_file ${SOURCES_TEST})
    message("Збираємо тест: ${test_file}")
    get_filename_component(test_name ${test_file} NAME_WE)
    add_executable(${test_name} ${test_file} list.cpp)
    add_test(NAME ${test_name} COMMAND ${test_name})
endforeach()
