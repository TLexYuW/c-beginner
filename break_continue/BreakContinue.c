#include <stdio.h>

int main()
{
    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop / switch

    for (int i = 1; i < 20; i++)
    {
        if (i == 13)
        {
            // continue; // skip 13, print others
            break; // stop at 13
        }
        printf("%d\n", i);
    }
    
}