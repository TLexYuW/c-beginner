#include <stdio.h>

int main()
{
    /*
    int numbers[2][3] =
        {
            {1, 2, 3},
            {4, 5, 6}};
    */

    int numbers[3][3];
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int colums = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}