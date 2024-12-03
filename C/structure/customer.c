#include <stdio.h>
#include <strint.h>
struct customer
{
    char name[30];
    int age;
    struct postalAddress{
        char plotno[10];
        char landName[10];
        char po[10];

    }add;   
};
struct {
    int empid;
    float salary;
}oc;

void main(){ 
     struct customer c;
     printf("enter your name: ");
     gets(c.name);  

     printf("enter your lane Name :");
     gets(c.add.laneName);

     printf("enter your empid : ");
     scanf("%d ",&oc.empId); 

     printf("enter your salary : ");
     scanf("%d ",&oc.salary); 

     printf("your details are :");
     puts("name \t");
     puts(c.name);
     puts("LaneName \t");
     puts(c.add.landName);

     puts('empid :');
     puts(c.add.landName);
     puts(c.add.landName);



}