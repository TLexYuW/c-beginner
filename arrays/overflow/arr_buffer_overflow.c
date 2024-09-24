#include <stdio.h>
#include <stdlib.h>

void bufferOverflowArray()
{
    int arr[5]; // Array of size 5

    // Accessing array out of bounds
    for (int i = 0; i <= 5; ++i)
    {               // Intentionally accessing arr[5], out of bounds
        arr[i] = i; // Writing to an invalid memory location when i == 5
        printf("%d\n", arr[i]);
    }
}

int main()
{
    bufferOverflowArray();
    return 0;
}