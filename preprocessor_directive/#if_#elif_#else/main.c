#include <stdio.h>

#define BUFFER_SIZE 100

// #define PLATFORM_CODE 0

#define VERSION_CODE 'A'

#define TOTAL_BUFFER 10

#define OS

#define FUNC(x) x - 100

#if FUNC(50) > 0
#define VALUE 500
#else
#define VALUE 1000
#endif

int main()
{

#if PLATFORM_CODE == 0
    printf("Platform 0\n");
#elif PLATFORM_CODE == 1
    printf("Platform 1\n");
#elif PLATFORM_CODE == 2
    printf("Platform 2\n");
#else
    printf("Unknown Platform\n");
#endif

#if 0
    printf("will not print\n");
#else
    printf("0 is false\n");
#endif

#if - 1
    printf("none-zero is true!\n");
#endif

#if VERSION_CODE == 'A'
    printf("VERSION_CODE is A\n");
#endif

#if BUFFER_SIZE * TOTAL_BUFFER > 5000 || 1
    printf("%d\n", BUFFER_SIZE);
#endif

#if defined(OS)
    printf("OS is defined\n");
#endif

    printf("Value: %d\n", VALUE);

    // printf("%d\n", BUFFER_SIZE);

    return 0;
}
