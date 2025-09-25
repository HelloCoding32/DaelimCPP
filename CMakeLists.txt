cmake_minimum_required(VERSION 3.26)
project(DaelimCPP)
set(CMAKE_CXX_STANDARD 17)

# 주차 폴더 목록만 관리합니다.
set(WEEK_DIRS week01 week02 week03 week04 DaelimCPP/week05)

foreach(d ${WEEK_DIRS})
    # 폴더 안의 모든 .cpp 자동 수집 (파일 추가/삭제에 반응)
    file(GLOB SRC CONFIGURE_DEPENDS ${d}/*.cpp)
    if(SRC)  # cpp가 하나라도 있으면 실행파일 생성
        add_executable(${d} ${SRC})
        # 필요하다면 include 경로
        target_include_directories(${d} PRIVATE ${d})
    endif()
endforeach()