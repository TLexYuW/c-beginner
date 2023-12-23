#include <stdio.h>

#define MAX 20

#define PI 3.14

#define print printf("PRINT THIS!\n");

#define inc(x) x + 1

#define area(base, height) 0.5 * base *height

#define min(x, y) (x < y) ? x : y

#define output(s1) printf("%s\n", s1);

#define output2(s1, s2) printf(#s1 " middle %s\n", s2);

#define find_max(array, length) ({           \
    typeof(array[0]) current_max = array[0]; \
    for (int i = 0; i < length; i++)         \
    {                                        \
        if (array[i] > current_max)          \
        {                                    \
            current_max = array[i];          \
        }                                    \
    }                                        \
    current_max;                             \
})

//  ({ printf("number: %d\n", num = increment()); printf("number: %d\n", num = increment()); printf("number: %d\n", num = increment()); });
#define print_number_3x(num) ({  \
    printf("number: %d\n", num); \
    printf("number: %d\n", num); \
    printf("number: %d\n", num); \
})

// ({ int nume = (num2 = increment()); printf("number: %d\n", nume); printf("number: %d\n", nume); printf("number: %d\n", nume); });
#define print_number_3x_2(num) ({ \
    int nume = (num);             \
    printf("number: %d\n", nume); \
    printf("number: %d\n", nume); \
    printf("number: %d\n", nume); \
})

int number = 0;

int increment()
{
    number++;
    return number;
}

int _area(int base, int height);

int main()
{
    printf("Max: %d\n", MAX);

    print;

    int a = 2;
    a = inc(a);

    printf("a: %d\n", a);

    int base1 = 20;
    int height1 = 20;
    int area1 = area(base1, height1);
    printf("%d\n", area1);

    double base2 = 10.5;
    double height2 = 5.5;
    double area2 = area(base2, height2);
    printf("%.3f\n", area2);

    int area = _area(base1, height1);
    printf("%d\n", area);

    int min_num = min(2, 7);
    printf("min_num: %d\n", min_num);

    int min_num2 = min(1, min(2, 7));
    printf("min_num2: %d\n", min_num2);

    // after preprocessor, before compilation
    // ((10 < 8) ? 10 : 8 < (5 < 11) ? 5 : 11) ? (10 < 8) ? 10 : 8 : (5 < 11) ? 5 : 11;
    int min_num3 = min(min(10, 8), min(5, 11));
    printf("min_num3: %d\n", min_num3);

    char string[] = "test2";
    output("abc");
    output(string);

    output2(test1, string);

    int arr[] = {10, 55, 99, 100, 5, 33, 7, 88};
    int max_num = find_max(arr, 8);
    printf("max_num: %d\n", max_num);

    double arr2[] = {5.9, 7.5, 15.2, 88.7, 6.7, 123.4, 70.3, 566.1};
    double max_num2 = find_max(arr2, 8);
    printf("max_num2: %f\n", max_num2);

    int num;

    print_number_3x(num = increment());

    printf("%d\n", num);

    int num2;

    print_number_3x_2(num2 = increment());

    printf("%d\n", num2);

    return 0;
}

int _area(int base, int height)
{
    return 0.5 * base * height;
}