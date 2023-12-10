#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Avoid Wild Pointer
    // Explicitly allocate the memory and put the values
    // in the allocated memory.
    int *ptr = (int *)malloc(sizeof(int));

    *ptr = 10;

    printf("%d\n", ptr);

    free(ptr);

    return 0;
}
