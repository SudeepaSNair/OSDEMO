#include<stdio.h>
#include<pthread.h>
void *pressurethread(void *data)
{
printf("In thread\n");
}
int main(int argc, char const *argv[])
{
    pthread_t pr_tid;
    printf("Before thread concatenation \n");
    pthread_create(&pr_tid,NULL,pressurethread,NULL);
    printf("After thread concatenation\n");
    pthread_join(pr_tid,NULL);
    printf("Thread joined\n");
    return 0;
}


