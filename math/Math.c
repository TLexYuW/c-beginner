#include <stdio.h>
#include <math.h>

int main()
{
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf_s("\nA=%d, B=%d, C=%d, D=%d, E=%d, F=%lf", A, B, C, D, E, F);
    printf_s("\nG=%d, H=%d, I=%d, I=%d, J=%d, J=%lf", G, H, I, J);

    return 0;
}
