#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student
{
    int slno;
    char name[30];
    float salary;
};

 int main(){ 
//  struct  Student s;
struct Student *ps=(struct Student* )malloc(2*sizeof(struct Student));

for (int i = 0; i<2;i++){

 printf("\nEnter student number: ");
 scanf("%d",&((ps+i)->slno));
  
 getchar();
 printf("enter your Name :");
 gets((ps+i)->name);

 printf("enter your Salary: ");
 scanf("%f",&((ps+i)->slno));
}

for (int i = 0; i<2;i++){

 printf("your slno: %d",((ps+i)->slno));
 puts("your Name :");
 puts((ps+i)->name);
 printf("your salary :%f",((ps+i)->salary));
   } 
return 0;
}