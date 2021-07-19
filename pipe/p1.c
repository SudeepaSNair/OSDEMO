#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc, char const *argv[])
{
    int fd;
    fd=open("fifo",O_WRONLY);
    write(fd,"Hello\n",6);
    close(fd);
    return 0;
}
