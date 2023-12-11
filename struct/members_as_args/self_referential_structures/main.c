#include <stdio.h>

struct self
{
    int p;
    struct self *ptr;
};

struct code
{
    int i;
    char c;
    struct code *ptr;
};

int main(int argc, char const *argv[])
{
    struct code c1;
    struct code c2;

    c1.i = 65;
    c1.c = 'A';
    c1.ptr = NULL;

    printf("%s => %d %c %p\n", "c1", c1.i, c1.c, c1.ptr);

    c2.i = 66;
    c2.c = 'B';
    c2.ptr = NULL;

    printf("%s => %d %c %p\n", "c2", c2.c, c2.c, c2.ptr);

    c1.ptr = &c2;
    printf("%s => %d %c %p\n", "c1", c1.i, c1.c, c1.ptr);

    printf("%d\n", c1.ptr->i);
    printf("%c\n", c1.ptr->c);
    printf("%p\n", c1.ptr->ptr);

    return 0;
}
