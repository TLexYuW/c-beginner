#include <stdio.h>
#include <pthread.h>

// Single Thread
/*
int x;
x = 20; 
int y;
y = 50;
int sum;
sum = x + y;
*/ 
// Multi Threads Program
/*
| int x;              |
|                     | int a;
|                     | a = 3;
| x = 20;             | 
| int y;              |
|                     | int b;
| y = 50;             |
|                     | b = 5;
|                     | int product;
| int sum;            |
| sum = x + y;        |
|                     | product = a * b;
||                    ||
*/

void *computation();

int main(int argc, char const *argv[])
{
    pthread_t thread1;
    pthread_t thread2;


    return 0;
}

void *computation()
{
    
    return NULL;
}
