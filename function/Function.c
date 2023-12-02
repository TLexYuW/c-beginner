#include <stdio.h>

void hello(char name[], int age)
{
    printf("\nHello %s!", name);
    printf("\nYour age %d years old!", age);
}

double square(double x)
{
    double result = x * x;
    return result;
}

int main()
{
    char name[] = "LLL";
    int age = 1000;

    hello(name, age);

    double x = square(3.1415);
    printf("\n%lf", x);

    return 0; // 0 = exit status if this program runs successfully
}
