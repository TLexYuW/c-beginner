#include <stdio.h>

extern int a;
int main(int argc, char const *argv[])
{
    // external
    // - Used when a particular file needs to access a variable from another file   

    printf("%d", a);

    return 0;
}
