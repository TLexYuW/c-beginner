#include <stdio.h>
#include <string.h>

int main()
{
    // for loop
    for (int i = 0; i < 10; i++)
    {
        printf("i=%d\n", i);
    }

    // while loop
    char name[25];
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);

    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Do Not Enter Empty");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s\n", name);

    // do while loop
    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a # above 0: ");
        scanf("\n%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0);
    printf("Sum = %d", sum);

    return 0;
}