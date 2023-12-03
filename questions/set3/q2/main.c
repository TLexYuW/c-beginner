#include <stdio.h>

static int i;
static int i = 27;
static int i;
int main(int argc, char const *argv[])
{
    static int i;

    printf("%d", i);

    return 0;
}
