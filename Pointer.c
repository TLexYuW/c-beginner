#include <stdio.h>

void printAge(int age)
{
    printf("You are %d years old", age);
}

void printpAge(int *age)
{
    printf("You are %d years old", *age);
}

int main()
{
    // Pointer
    // a "variable-like" reference that holds a memory address to another variable, array, etc.
    // some tasks are performed more easily with pointer
    // * = indirection operator (value at address)
    /* Advantages of Using Pointers
        - Less time in programming execution
        - Working
        - With the help of pointers, we can create data structures (linked-list, stack, queue)
        - Returning more than one values from functions
        - Searning and sorting large data very easily
        - Dynamically memory allocation
    */

    int age = 21;
    int *pAge = NULL; // good practice to assign NULL if declaring a pointer
    pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of age: %d\n", age);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value address of pAge: %p\n", pAge);
    printf("value at stored address: %d\n", *pAge); // dereferencing

    printAge(age);
    printpAge(pAge);

    return 0;
}