#include <stdio.h>

int main(int argc, char const *argv[])
{
    // octal
    // 5 x 8^1 + 2 x 8^0
    int var = 052;

    printf("%d\n", var);

    printf("%o", var);

    return 0;
}
