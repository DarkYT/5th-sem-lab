#include <stdio.h>
 int main(){ 
 char arr[20];
 int count =0;
 printf("\n Enter a string ");
 gets(arr);
 for(int i=0;arr[i]!='\0';i++){
    count++;
 }
 printf("so the length is %d",count);
return 0;
}