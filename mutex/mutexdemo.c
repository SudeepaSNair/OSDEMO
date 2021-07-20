#include<stdio.h>
#include<pthread.h>
int count=0;
pthread_mutex_t mutex_count;

void *incthread(void * data)
{
while(1)
{
    pthread_mutex_lock(&mutex_count);
    count++;
    printf("Increment count is %d\n",count);
    pthread_mutex_unlock(&mutex_count);
}
}
void *decthread(void * data)
{
while(1)
{
    pthread_mutex_lock(&mutex_count);
    count--;
    printf("Decrement count is %d\n",count);
    pthread_mutex_unlock(&mutex_count);
}
}
int main(int argc, char const *argv[])
{
    pthread_t incid,decid;
    pthread_mutex_init(&mutex_count,NULL);
    pthread_create(&incid,NULL,incthread,NULL);
    pthread_create(&decid,NULL,decthread,NULL);
    pthread_join(incid,NULL);
    pthread_join(decid,NULL);
    pthread_mutex_destroy(&mutex_count);
    return 0;
}
