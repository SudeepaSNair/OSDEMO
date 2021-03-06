#include<stdio.h>
#include<pthread.h>
void *uart_init(void *data)
{
printf("In thread %d\n",*(int *)data);
}
int main(int argc, char const *argv[])
{
    pthread_t uart1_tid;
    pthread_t uart2_tid;
    int baudrate1,baudrate2;
    printf("Before thread concatenation \n");
    baudrate1=9600;
    pthread_create(&uart1_tid,NULL,uart_init,&baudrate1);
    baudrate2=115200;
    pthread_create(&uart2_tid,NULL,uart_init,&baudrate2);
    printf("After thread concatenation\n");
    pthread_join(uart1_tid,NULL);
    pthread_join(uart2_tid,NULL);
    printf("Thread joined\n");
    return 0;
}

