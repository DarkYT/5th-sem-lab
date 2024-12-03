#include <stdio.h>
#include <stdlib.h>
 int main(){ 
  
  int *parr=(int *) malloc (5*sizeof(int)); // (5*4)//(20)
  printf("enter the array");
  for (int i = 0; i<5;i++){
    scanf("%d",(parr+i));
  }
  for (int i = 0; i<5;i++){
    printf(" arr[%d] : %d \n",i,*(parr+i));
  }
// Enlarging the array
parr=(int*)realloc(parr,7*sizeof(int));
printf("Enter \n");
for (int i=0;i<7;i++){
    scanf("%d",(parr+i));
}

printf("\n display");
for(int i=0;i<7;i++){
    printf(" arr[%d] : %d \n",i,*(parr+i));
}
return 0;
}