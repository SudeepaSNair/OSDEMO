#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#define SIZE 64
int main(int argc, char const *argv[])
{
    unsigned char buff[SIZE];
    int fd;
    fd=open("fifo",O_RDONLY);
    read(fd,buff,SIZE);
    printf("P2:got data %s from P1\n",buff);
    close(fd);
    return 0;
}
