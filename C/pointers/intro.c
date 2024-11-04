#include <stdio.h>
 int main(){ 
int a=10;
int *p=&a;
printf("%d \n ",a);
printf("%d \n ",p);
printf("%d \n ",*p);
printf("%u \n ",p);
printf("%u \n ",&p);
printf("\n%d",sizeof(&a));
printf("\n%d",sizeof(a));
printf("\n%u",sizeof(p));
return 0;
}