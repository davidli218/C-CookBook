#include <stdio.h>

#include "algol68_format.h"

int str_compare_(const char *s1, const char *s2) {
    while (*s1++ == *s2) {
        if (*s2++ == 0) {
            return 0;
        }
    }
    return (*--s1 - *s2);
}

INT str_compare(CONST STRING s1, CONST STRING s2)
BEGIN
    WHILE *s1++ == *s2 THEN
        IF *s2++ == 0 THEN
            return 0;
        FI
    ELIHW
    return (*--s1 - *s2);
END

int main() {
    char *test_s1 = "Hello";
    char *test_s2 = "World";

    printf("%d\n", str_compare_(test_s1, test_s2));
    printf("%d\n", str_compare(test_s1, test_s2));

    return 0;
}
