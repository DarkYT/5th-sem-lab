#include <stdio.h>
 int main(){ 
 char arr[20];
 int count =0;
 printf("\n Enter a string :");
 gets(arr);
 for(int i=0;arr[i]!='\0';i++){
    count++;
 }
 char a[count];
 int len=count;
 for(int i=count;i!=0;i--){
   printf("%c",arr[i-1]);
   a[len-i]=arr[i-1];
    
 }
 printf("\n new reversed string is :");
for(int i=0;i<count;i++){
    printf("%c",a[i]);
}

 printf("\nso the length is %d ",count);
return 0;
}

//  reversing with out using extra variable
// int len=0;
// for(int i=0;arr[i]!='\0';i++){
//     len++;
// }

// for(int i=0;i<(len/2);i++){
//     // swap arr[i] with arr[len-1-i]
//     char temp = arr[i];
//     arr[i]= arr[len-1-i];
//     arr[len-1-i]=temp;
// }