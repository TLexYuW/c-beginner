#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr = (int *)malloc(sizeof(int));

    printf("%p\n", ptr);

    free(ptr); // The pointer is still pointing to the deallocated memory.

    printf("%p\n", ptr); 

    ptr = NULL;

    printf("%p\n", ptr); // ptr is no more dangling

    return 0;
}
