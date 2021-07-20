#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
int count=0;
sem_t sem_count;

void *incthread(void * data)
{
while(1)
{
    sem_wait(&sem_count);
    count++;
    printf("Increment count is %d\n",count);
    sem_post(&sem_count);
}
}
void *decthread(void * data)
{
while(1)
{
    sem_wait(&sem_count);
    count--;
    printf("Decrement count is %d\n",count);
    sem_post(&sem_count);
}
}
int main(int argc, char const *argv[])
{
    pthread_t incid,decid;
    sem_init(&sem_count,0,1);
    pthread_create(&incid,NULL,incthread,NULL);
    pthread_create(&decid,NULL,decthread,NULL);
    pthread_join(incid,NULL);
    pthread_join(decid,NULL);
    sem_destroy(&sem_count);
    return 0;
}