#include <stdio.h>

/*
A Function Prototype causes the compiler to flag an error if arguments are missing
- Easier to navigate to program w/ main() at the top
- Helps with debugging
- Commonly used in header files
*/
void hi(char[], int); // Function Prototype


int main()
{
    // Ensure that calls to a function are made with the correct arguments
    char name[] = "XXX";
    int age = 10000;

    // hi(name);
    hi(name, age);

    return 0;
}

void hi(char x[], int y)
{

    printf("\n %s", x);
    printf("\n %d", y);
    
}
