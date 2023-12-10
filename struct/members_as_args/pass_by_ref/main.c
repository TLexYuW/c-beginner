#include <stdio.h>

struct charset
{
    char s;
    int i;
};

void keyValue(char *s, int *i)
{
    scanf("%c %d", s, i);
}

int main(int argc, char const *argv[])
{
    int j;
    struct charset cs;
    keyValue(&cs.s, &cs.i);
    printf("%c %d\n", cs.s, cs.i);
    printf("%p %p", cs.s, cs.i);

    return 0;
}
