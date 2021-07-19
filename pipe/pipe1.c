#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#define SIZE 64
int main(int argc, char const *argv[])
{
    unsigned char buff[SIZE];
    unsigned char buff1[SIZE];
    int pfd[2];
    int pfdr[2];
    pid_t id;
    pipe(pfd);
    pipe(pfdr);
    id=fork();
    if(id==0)
    {
    printf("Child:\n");
    close(pfd[1]);//close writing end
    read(pfd[0],buff,SIZE);//read date from reading end
    printf("Child got data :%s\n",buff);
    close(pfd[0]);
    }
    else
    {
    printf("Parent:\n");
    close(pfd[0]);//close reading end
    write(pfd[1],"Hello",5);//read date from reading end
    printf("Data sent by parent successfully.\n");
    close(pfd[1]);
    }
    return 0;
}

