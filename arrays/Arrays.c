#include <stdio.h>

int main()
{
    // double prices[] = {5.0,
    //                    10.0,
    //                    15.0,
    //                    25.0,
    //                    20.0};

    // printf("$%.2lf", prices[1]);

    double prices2[3];

    prices2[0] = 100.0;
    prices2[1] = 50.0;
    prices2[2] = 25.0;
    // printf("\n$%.2lf", prices2[2]);

    printf("%lu", sizeof(prices2));
    printf("\n%lu", sizeof(prices2[0]));

    // loop array
    for (int i = 0; i < sizeof(prices2) / sizeof(prices2[0]); i++)
    {
        printf("\n%.2lf", prices2[i]);
    }

    return 0;
}