#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#define BUFSIZE 64
int main(int argc,char *argv[])
{
    int fp1,fp2;
    ssize_t n;
    unsigned char buffer[BUFSIZE];
    if(argc <=2)
    {
    printf(1,"Need 2 arguments\n");
    exit(EXIT_FAILURE);
    }
    fp1=open(argv[1], O_RDONLY);
    fp2=open(argv[2],O_WRONLY| O_CREAT,S_IRUSR|S_IRGRP|S_IROTH);
    if(-1 == fp1 || -1==fp2)
    {
        perror("Error in opening file");
        exit(EXIT_FAILURE);
    }
    n=read(fp1,buffer,BUFSIZE);
    write(fp2,buffer,n);
    printf("Files copied \n");
    close(fp1);
    close(fp2);
  return 0;
}
