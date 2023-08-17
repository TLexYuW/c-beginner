#include <stdio.h>

int main()
{
    char grade;
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);
    // printf("\nMemory Addr: %p", grade); // wrong, pass value to printf()
    printf("\nMemory Addr: %p", &grade);
    printf("\nMemory Addr: %p\n", (void*)&grade);

    switch (grade)
    {
    case 'A' :
        printf("Perfect");
        break;

    default:
        printf("Please enter only valid grades");
        break;
    }


    return 0;
}