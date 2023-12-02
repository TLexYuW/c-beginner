#include <stdio.h>

int main()
{
    // variable = Allocated space in memory to store a value.

    int x;       // declaration
    x = 123;     // init
    int y = 321; // init + declaration

    int age = 21;
    float gpa = 2.05;
    char grade = 'C';
    char name[] = "Bro";

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);
}