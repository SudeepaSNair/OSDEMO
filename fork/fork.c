#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id;
    id=fork();
    if(id==0)
    {
        printf("Child Process\n");
        printf("Child PID: %d\n",getpid());
        printf("Child PPID: %d\n",getppid());
        printf("Child ID: %d\n",id);
    }
    else
    {
        printf("Parent process\n");
        printf("Parent id: %d \n",getpid());
        printf("Parent PPID: %d \n",getppid());
        printf("Parent ID :%d \n",id);
    }
    
    return 0;
}
