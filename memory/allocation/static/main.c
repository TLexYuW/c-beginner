#include <stdio.h>

int main()
{
    // Static Memory Allocation
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%p\n", arr);

    printf("%d\n", sizeof(arr));

    printf("%d\n", sizeof(arr[0]));

    printf("==============================\n");

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
