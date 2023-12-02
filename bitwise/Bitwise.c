#include <stdio.h>

int main()
{
    // Bitwise Operators
    // special operators used in bit level programming
    // (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift

    int x = 6;  // 0000_0110
    int y = 12; // 0000_1100
    int z = 0;  // 0000_0000

    z = x & y;
    printf("AND = %d\n", z); // 0000_0100 <==> 4

    z = x | y;
    printf("OR = %d\n", z); // 0000_1110 <==> 14

    z = x ^ y;
    printf("XOR = %d\n", z); // 0000_1010 <==> 10

    z = x << 1;
    printf("Shift Left  = %d\n", z); // << 1 , 1100 <==> 12 ; << 2 , 0001_1000 <==> 24

    z = x >> 1;
    printf("Shift Right  = %d\n", z); // >> 1 , 0000_0011 <==> 3
    
    return 0;
}
