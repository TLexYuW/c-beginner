#include <stdio.h>

// #define BUFFER_SIZE 100

#define DEBUG_MODE

#undef DEBUG_MODE

#define WINDOWS

#ifdef LINUX
#define BUFFER_SIZE 100
#endif

#ifdef MAC
#define BUFFER_SIZE 200
#endif

#ifdef WINDOWS
#define BUFFER_SIZE 300
#endif

int main()
{
#ifdef DEBUG_MODE
    printf("Debug Mode!\n");
#else
    printf("Not Debug Mode 2!\n");
#endif

#if defined DEBUG_MODE
    printf("Debug Mode!\n");
#endif

#ifndef DEBUG_MODE
    printf("Not Debug Mode!\n");
#endif

#if !defined DEBUG_MODE
    printf("Not Debug Mode!\n");
#endif

    printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);

    char buffer[BUFFER_SIZE];
    printf("sizeof(buffer): %lu\n", sizeof(buffer));

    return 0;
}
