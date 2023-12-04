#include <stdio.h>

// malloc() and calloc returns a void pointer
// they can aollocate a memory for any type of data
int main()
{
    int n = 10;
    // it can point to any data of any data type
    // and can be typecaseted to any type
    void *ptr = &n;

    // cannot dereference a void pointer
    // printf("%d", *ptr);

    printf("%d", *(char *)ptr);

    return 0;
}