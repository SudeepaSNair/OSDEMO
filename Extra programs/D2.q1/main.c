#include<stdio.h>
#include "header.h"
 void main()
       {
              struct Employee Emp;
             printf("\nEnter name");
             gets(Emp.Name);
             printf("\nEnter ID");
             scanf("%d",&Emp.Id);
             printf("E\nnter salary :");
             scanf("%f",&Emp.Salary);
             char *var=(char *)&Emp;//typecasting to char 
              func(var);//passing char to function

       }
