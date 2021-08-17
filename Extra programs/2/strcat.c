#include<stdio.h>
int append(char a[],char b[])
{
int i=0,j=0;
while(a[i]!='\0')
{
    i++;
}
while(b[j]!='\0')
{
    a[i]=b[j];
    i++;
    j++;
}

a[i]='\0';

printf("Strings after concatenation : %s\n",a);
return 0;
}