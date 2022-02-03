#define SOLUTION 2

#if (SOLUTION == 1)

#include <string.h>

char *my_strcpy(char *dest, const char *src) {
    memcpy(dest, src, strlen(src) + 1);
    return dest;
}

#elif (SOLUTION == 2)

char *my_strcpy(char *dest, const char *src) {
    int i = 0;
    for (; src[i]; dest[i] = src[i], i++);
    dest[i] = 0;
    return dest;
}

#endif
