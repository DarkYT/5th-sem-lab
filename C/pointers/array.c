#include <stdio.h>
 int main(){ 
//  int arr[5];
//  int *p
//  p = arr;
//  //p=&arr[0]
//  printf("enter 5 elements : ");
//  for(int i=0;i<5;i++){
//     scanf("%d",(p))
//  }

 int arr1d[5]={11,33,22,55,44};
 int *p;
 p=arr1d;

 printf("\n  %d: ",arr1d[3]);
 printf("\n  %d: ",*(arr1d+3));
 printf("\n  %d: ",*(arr1d+0));
 printf("\n  %d: ",*(p+3));
 printf("\n  %d: ",*(p));
 p++;
 printf("\n  %d: ",*p);

return 0;
}

