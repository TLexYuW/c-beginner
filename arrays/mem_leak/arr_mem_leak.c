#include <stdio.h>
#include <stdlib.h>

void memoryLeakArray()
{
    int *arr = (int *)malloc(100 * sizeof(int));

    // Free the allocated memory to avoid a memory leak
    // free(arr);
}

int main()
{
    memoryLeakArray();
    return 0;
}