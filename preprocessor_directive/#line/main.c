#include <stdio.h>

/*
for output error message purpose
*/

int main()
{
#line 51 "origin.c"
    printf("error @ %s:%d\n", __FILE__, __LINE__);

    printf("again @ %s:%d\n", __FILE__, __LINE__);

    return 0;
}

/**
 * origin.c -> file.c
 *
 * line 51 -> line 9 code
 */