#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\n Enter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf_s("\n circumference=%lf, area=%lf", circumference, area);

    return 0;
}
