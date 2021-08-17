#include<stdio.h>
#include "header.h"
int main()
{
    int a,b,sum;
    printf("Enter both  numbers\n");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("Sum of two numbers is %d\n",sum);
    return 0;
}