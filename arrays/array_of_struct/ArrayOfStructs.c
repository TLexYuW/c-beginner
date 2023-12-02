#include <stdio.h>
#include <string.h>

struct Student
{
    char name[12];
    float gpa;
};

int main()
{
    struct Student student1 = {"AAA", 3.0};
    struct Student student2 = {"BBB", 2.5};
    struct Student student3 = {"CCC", 4.0};
    struct Student student4 = {"DDD", 2.0};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf_s("\n%s == %.2lf", students[i].name,students[i].gpa);
    }

    return 0;
}