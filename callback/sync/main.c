#include <stdio.h>
#include <unistd.h>

int foo(void)
{
    printf("Executing foo...\n");
    sleep(2); // Simulate a delay of 2 seconds
    printf("foo finished.\n");
    return 1;
}

int bar(int (*param)(void))
{
    printf("Executing bar...\n");
    int result = param(); // Call the callback function
    printf("bar finished.\n");
    return result;
}

int main(int argc, char const *argv[])
{
    bar(foo);
    return 0;
}
