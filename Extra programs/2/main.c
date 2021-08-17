#include<stdio.h>
#include "header.h"
int main()
{
char a[40],b[40];
printf("Enter string 1:\n");
gets(a);
printf("Enter string 2:\n");
gets(b);
compare(a,b);
append(a,b);
copy(a,b);
return 0;

}