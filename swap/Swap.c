#include <stdio.h>
#include <string.h>

int main()
{
    // char x = 'X';
    // char y = 'Y';
    // char temp;

    // temp = x;
    // x = y;
    // y = temp;

    // printf("x = %c\n", x);
    // printf("y = %c\n", y);

    // string
    char xx[40] = "water";
    char yy[32] = "soda";
    char t2[48];

    strcpy(t2, xx);
    strcpy(xx, yy);
    strcpy(yy, t2);

    // t2 = xx;
    // xx = yy;
    // yy = t2;

    printf("t2 = %s\n", t2);
    printf("xx = %s\n", xx);
    printf("yy = %s\n", yy);


    return 0;
}