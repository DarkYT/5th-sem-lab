#include <stdio.h>
#include <string.h>

 int main(){ 
  struct abc{
    int slno;
    char name[30];
    float salary;
  }a;
  struct abc b;
  a.slno=1;
  strcpy(a.name," spandan patel ");
  a.salary= 23333.3456;
  b.slno=2;
//   b.name="saurya";
  b.salary=546343.454;
//   printf("%d",a);
  printf(" \n %d %s %f \n",a.slno,a.name,a.salary);
//   puts(a.name);
 
return 0;
}