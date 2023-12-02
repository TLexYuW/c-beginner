#include <stdio.h>

int main()
{
    int rows;
    int colums;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of colums: ");
    scanf("%d", &colums); 

    scanf("%c", &symbol); 

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows ; i++)
    {
        for (int j = 1; j <= colums; j++)
        {
            // printf("j=%d, ", j);
            printf("%c", symbol);
        }
        printf("\n");
    }
    
    return 0;
}