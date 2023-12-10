#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *sample()
{
    printf("Thread Sample.\n");
    sleep(1);
    printf("end Thread\n");
}

int main(int argc, char const *argv[])
{
    pthread_t tid1, tid2;

    pthread_create(&tid1, NULL, &sample, NULL);
    pthread_create(&tid2, NULL, &sample, NULL);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    

    return 0;
}


