#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("The temp is currently in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Fareheit is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("The temp is currently in Farenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }
    else
    {
        printf("\n %c Invalid Input", unit);
    }
}