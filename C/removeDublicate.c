#include <stdio.h>
 int main(){ 
   int arr[10]={3,5,7,1,9,3,1,2,3,8
   };
    printf("\n please enter 10 elments: ");
   for(int i=0;i<10;i++){
        printf("%d  ",arr[i]);

   }
// sort
   printf("\n the sorted array is ");
   for (int i = 0; i < 9; i++) { // iterate 9 times (not 10)
    for (int j = 0; j < 9 - i; j++) { // iterate from 0 to 9-i
        if (arr[j] > arr[j + 1]) { // swap if arr[j] > arr[j + 1]
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
      
   for(int i=0;i<10;i++){ 
     printf(" %d ",arr[i]);

   }
//count
   printf("\n the remove array is ");
    int num ;
    int count=0;
   for(int i=0;i<10;i++){
    if(arr[i]!=arr[i+1]){
         printf("%d  ",arr[i]);
    }
      else{

         continue;
      }
   }
return 0;
}