#include <stdio.h>

#include "my_string.h"

int main(void) {
    char *hello = "Hello", *world = "World";
    char str1[8], str2[8];

    my_strcpy(str1, hello);
    my_strcpy(str2, world);

    printf("<strcpy>\n");
    printf("my_strcpy: %s, %s\n", str1, str2);

    printf("\n<strcmp>\n");
    printf("my_strcmp: %d\n", my_strcmp(str1, str2));

    return 0;
}
