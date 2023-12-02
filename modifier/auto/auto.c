#include <stdio.h>

int g_var;
int main(int argc, char const *argv[])
{
    // variable declared inside a scope by default
    // are automatic variables
    // - destroyed after the completion

    // won't initialize auto var, by default it will be init with some garbage value
    auto int var;
    printf("%d\n", var);

    printf("%d", g_var);

    return 0;
}
