#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("a addr %p\n", &a);
    printf("b addr %p\n", &b);
    printf("c addr %p\n", &c);

    char d;
    char e[2];

    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));
    printf("d addr %p\n", &d);
    printf("e addr %p\n", &e);

    return 0;
}
