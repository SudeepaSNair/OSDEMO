#include<stdio.h>
int copy(char a[],char b[])
{
int i=0;
for(i=0;a[i]!='\0';i++)
{
a[i]=b[i];
}
a[i]='\0';
printf("After copying 2nd string to 1st string : %s",a);
return 0;
}