#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Avoid Wild Pointer
    // init them with the address of a known variable
    int var = 10;
    int *ptr;
    
    ptr = &var;

    printf("%d\n", ptr);

    return 0;
}
