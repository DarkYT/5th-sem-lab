#include <stdio.h>
 int main(){ 
   int arr[5];
    printf("\n please enter 5 elments: ");
   for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
   }
   printf("\n enter num : ");
    int num ;
    int count=0;
    scanf("%d",&num);
   for(int i=0;i<5;i++){
    if(arr[i]==num){
        count++;
    }
   

   }
    printf("\n the number %d is present %d itmes ",num,count);

return 0;
}