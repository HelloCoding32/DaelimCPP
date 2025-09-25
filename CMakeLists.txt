set(WEEK_DIRS week01 week02 week03 week04 week05)

foreach(dir IN LISTS WEEK_DIRS)
    file(GLOB SRC CONFIGURE_DEPENDS ${dir}/*.cpp)
    if(SRC)
        # dir이 'week05'면 타깃 이름도 'week05'가 됩니다.
        set(target_name ${dir})
        add_executable(${target_name} ${SRC})
        target_include_directories(${target_name} PRIVATE ${dir})
    endif()
endforeach()