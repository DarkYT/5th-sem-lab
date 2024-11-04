#include <stdio.h>
 int main(){ 
   int arr[5];
    printf("\n please enter 5 elments: ");
   for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
   }
   printf("\n enter num : ");
    int num;
    scanf("%d",&num);
   for(int i=0;i<5;i++){
    if(arr[i]==num){
        arr[i]=23;
    }
    printf("\n %d ",arr[i]);

   }

return 0;
}