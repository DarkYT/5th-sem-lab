#include <stdio.h>
 
void exchange(int * ,int* );
void exchange(int *p,int *q){

//  int *p=&a , *q=&b;
 (*p) = (*p) + (*q) ;
 (*q) = (*p) - (*q) ;
 (*p) = (*p)- (*q);
//  printf("\n %d ",a);
 printf("\n a= %d  ",*p);
//  printf("\n %d ",(*q));
 printf("\n b= %d  ",*q);
}
 int main(){ 
 
 int a,b;
 printf("enter a and b \n ");
 scanf("%d %d",&a,&b);
 exchange(&a,&b);
return 0;
}