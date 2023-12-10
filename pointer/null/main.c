#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    // 1. It's used to init a pointer isn't assigned any valid memory address yet.
    int *ptr = NULL;
    printf("%p\n", ptr);
    printf("%d\n", ptr);
    // Size of NULL pointer depends upon the platform 
    // and is similar to the size of the normal pointers
    printf("%d\n", sizeof(ptr));

    // 2. Useful for hadling errors when using malloc function
    int *ptr_m;
    // ptr_m = (int *)malloc(2 * sizeof(int));

    if (ptr_m == NULL)
    {
        printf("%p\n", ptr_m);
        printf("Memory could not be allocated");
    }
    else
    {
        printf("%p\n", ptr_m);
        printf("Memory allocated successfully");
    }

    return 0;
}
