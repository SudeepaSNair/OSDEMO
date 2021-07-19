#include<stdio.h>
#include "header.h"
int main()
{
    int a ,b;
    a=10;
    b=5;
    add(a,b);
    printf("Sum is %d\n",add(a,b));
    return 0;
}