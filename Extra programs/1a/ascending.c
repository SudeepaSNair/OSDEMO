#include<stdio.h>
int ascending(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("Numbers after sorting in ascending order\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}