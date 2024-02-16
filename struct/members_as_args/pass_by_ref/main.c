#include <stdio.h>

struct charset
{
    char s;
    int i;
};

void keyValue(char *s, int *i)
{
    *s = 'c';
    *i = 100;
    printf("%c, %d\n", *s, *i);
}

void setNum(int *num2)
{
    printf("before setting, num2: %d\n", *num2);
    *num2 = 5;
    printf("after setting, num2: %d\n", *num2);
}

int main(void)
{
    struct charset cs;
    keyValue(&cs.s, &cs.i);
    printf("%c %d\n", cs.s, cs.i);
    printf("%p %p", cs.s, cs.i);

    // int num1 = 2;
    // printf("before setNum(), num1: %d\n", num1);

    // setNum(&num1);
    // printf("after setNum(), num1: %d\n", num1);

    return 0;
}
