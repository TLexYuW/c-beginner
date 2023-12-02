#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'C';        // %c
    char b[] = "String"; // array of character %s

    float c = 3.141592;           // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    printf("%0.15f\n", c);
    printf("%0.15lf\n", d);

    bool e = true; // 1 byte %d
    printf("%d\n", e);

    char f = 120; // 1 byte (-128 to +127 ASCII)  %d or %c
    printf("%d\n", f);
    printf("%c\n", f);

    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    short int h = 32768;          // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d
    printf("%d\n", h);
    printf("%d\n", i);

    int j = 2147483647;           // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295L; // 4 bytes (0 to +4,294,967,295) %u
    printf("%d\n", j);
    printf("%u\n", k);


    long long int l = 9223372036854775807;           // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to quintillion) %llu
    printf("%d\n", j);
    printf("%u\n", k);

    return 0;
}
