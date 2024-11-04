#include <stdio.h>
 int main(){ 
   int arr[5];
    printf("\n please enter 5 elments: ");
   for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
   }
   printf("\n enter num : ");
    int num =arr[0];
    int num1 =arr[0];
   
   for(int i=0;i<5;i++){
    if(arr[i]>=num){
        num=arr[i];
    }
    if(arr[i]<=num1){
        num1=arr[i];
    }

   }
    printf("\n the greatest element is %d ",num);
    printf("\n the smallest element is %d ",num1);

return 0;
}