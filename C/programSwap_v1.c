#include<stdio.h>

void main(){
  int a,b;
  // printf("enter two numbers :");
  scanf("%d",&a);
  scanf("%d",&b);
   int temp =a;
   a=b;
   b=temp;
   printf("after swaping %d %d",a,b);
}

