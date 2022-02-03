project(libc-string)

add_executable(libc_string test_my_string.c
        my_string.h my_strcmp.c my_strcpy.c)
