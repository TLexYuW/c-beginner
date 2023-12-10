#include <stdio.h>
#include <stdlib.h>

int *fun()
{
    int num = 10;
    return &num;
}

// Segmentation fault
int main()
{
    int *ptr = NULL;

    ptr = fun();

    printf("%d\n", *ptr);

    return 0;
}
