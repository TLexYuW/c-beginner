#include <stdio.h>

int main()
{
    printf("unsigned long long: %d\n", sizeof(unsigned long long));
    printf("unsigned long: %d\n", sizeof(unsigned long));
    printf("unsigned int: %d\n", sizeof(unsigned int));

    printf("char: %d\n", sizeof(char));
    printf("unsigned char: %d\n", sizeof(unsigned char));

    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));

    return 0;
}
