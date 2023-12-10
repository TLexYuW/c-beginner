
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

void *computation(void *add);

int main(int argc, char const *argv[])
{
    pthread_t thread1;
    pthread_t thread2;

    long value1 = 1;
    long value2 = 2;


    /* Single Thread
    computation(&value1);
    computation(&value2);
    */

    /* As a Single Thread
    pthread_create(&thread1, NULL, &computation, (void *)&value1);
    pthread_join(thread1, NULL);
    pthread_create(&thread2, NULL, &computation, (void *)&value2);
    pthread_join(thread2, NULL);
    */

    // /*
    pthread_create(&thread1, NULL, &computation, (void *)&value1);
    pthread_create(&thread2, NULL, &computation, (void *)&value2);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    // */

    return 0;
}

void *computation(void *add)
{
    long sum = 0;
    long *add_num = (long *)add;

    printf("%d\n", add_num);

    printf("Computation...\n");

    for (long i = 0; i < 1000000000; i++)
    {
        sum += *add_num;
    }

    printf("Add: %ld\n", *add_num);

    return NULL;
}