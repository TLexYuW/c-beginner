#include <stdio.h>
#include <stdlib.h>

// Segmentation fault
int main()
{
    // Wild Pointer   
    int *ptr;

    *ptr = 10;

    printf("%d\n", ptr);

    return 0;
}
