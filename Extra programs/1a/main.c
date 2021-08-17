#include<stdio.h>
#include "header.h"
int main()
{
    int a[20],n,i;
    printf("Enter the number of integers\n");
    scanf("%d",&n);
    printf("Enter the integers:\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
ascending(a,n);
descending(a,n);
return 0;
}