#include <stdio.h>

int main(int argc, char const *argv[])
{
    // hex
    int var = 0x43FF;
    
    // Using %x to print an integer in hexadecimal format
    printf("%x\n", var);

    printf("%X\n", var);

    printf("%d", var);

    return 0;
}
