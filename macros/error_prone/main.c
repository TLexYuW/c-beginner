#include <stdio.h>

#define ADD(x, y) (x + y)

int main()
{
    int x = 5;
    int result = ADD(x, x);
    // Expanded: int result = (x + x);
    // Unintended variable capture: int result = (5 + 5);

    printf("%d\n", result);

    return 0;
}
