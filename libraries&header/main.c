#include <stdio.h>
#include "library.h"

int main()
{
    printf("%d + %d = %d\n", 4, 5, add(4, 5));
    printf("%d + %d = %d\n", 100, 55, sub(100, 55));

    return 0;
}
