#include <stdio.h>
 int main(){ 
 char arr[20];
 int count =0;
 printf("\n Enter a string :");
 gets(arr);
 for(int i=0;arr[i]!='\0';i++){
    if(arr[i]==' '){
        printf(" ");
        continue;
    }
     arr[i]= arr[i]-32;
     printf("%c",arr[i]);
 }
 }
 // A =65 , a= 97
