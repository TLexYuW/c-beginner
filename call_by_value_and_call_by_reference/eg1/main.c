#include <stdio.h>

int fun(int x, int y);
int fun2(int *x, int *y);

int main(void)
{
    int x = 10, y = 20;
    fun(x, y);
    printf("x = %d, y = %d\n", x, y);
    fun2(&x, &y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

// Call By Value
int fun(int x, int y)
{
    printf("fun : x = %d, y = %d\n", x, y);
    x = 20;
    y = 10;
}

// Call By Reference
int fun2(int *x, int *y)
{
    printf("fun2 : x = %d, y = %d\n", *x, *y);
    *x = 20;
    *y = 10;
}