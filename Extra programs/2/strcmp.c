#include<stdio.h>
int compare(char a[],char b[])
{
    int res,i=0;
    while (a[i]==b[i])
    {
    if(a[i]=='\0' && b[i]=='\0')
        break;
       i++;
    }
    res =a[i]-b[i];

    if(res==0)
    printf("Both strings are equal\n");
    else if(res<0)
    printf("String 1 is less than staring 2\n");
    else
    printf("String 1 is greater than string 2\n");
    return 0;
}