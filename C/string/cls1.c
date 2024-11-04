#include <stdio.h>
 int main(){ 
  char arr[15];
  printf("\nEnter a string: ");
  for(int i=0;i<15;i++){
    scanf("%c",&arr[i]);
  }
  printf("\n so the entered string is \n");
//   for(int i=0;i<15;i++){
//     printf("%c",arr[i]);
//   }
  for(int i=0;arr[i]!='\0';i++){
    printf("%c",arr[i]);
  }
return 0;
}