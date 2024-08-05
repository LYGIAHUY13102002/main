cmake_minimum_required(VERSION 3.10)

# Tên dự án
project(001_library_manage CXX)

# Thêm tệp nguồn
set(SOURCES main.cpp)

# Tạo tệp thực thi
add_executable(${PROJECT_NAME} ${SOURCES})

# Cài đặt các cờ biên dịch
target_compile_options(${PROJECT_NAME} PRIVATE -pthread)

# Thêm các thư viện cần thiết
target_link_libraries(${PROJECT_NAME} PRIVATE pthread)

# Thêm target clean với tên khác
add_custom_target(clean_all
    COMMAND ${CMAKE_COMMAND} -E rm -f ${PROJECT_NAME}
    COMMENT "Cleaning up the build directory"
)
