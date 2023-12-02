#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // psedu random numbers
    // A set of values or elements that are statistically random
    // (Don't use thes for any sort of cryptographic security)

    srand(time(0)); // seed

    int num1 = (rand() % 20) + 1;
    int num2 = (rand() % 20) + 1;
    int num3 = (rand() % 20) + 1;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    return 0;
}