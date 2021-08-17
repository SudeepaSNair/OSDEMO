 #include<stdio.h>
 #include "header.h"
  void func(char * var)
       {
           struct Employee *E;
           E=(struct Employee *)var;//typecasting char into structure type
                    printf("\n\nEmployee Id : %d",E->Id);
                    printf("\nEmployee Name : %s",E->Name);
                    printf("\nEmployee Salary : %f\n",E->Salary);
       }
