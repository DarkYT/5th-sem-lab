#include <stdio.h>
 int main(){ 
 char arr[20];
 int count =0;
 printf("\n Enter a string :");
 gets(arr);
 char a[10] ={'a','e','i','o','u','A','E','I','O','U'};

 for(int i=0;arr[i]!='\0';i++){
    for(int j=0;j<10;j++)
    //   if(arr[i]=='a'||arr[i]=='a'||)arr[i]=='a'||)arr[i]=='a'||)arr[i]=='a'||)arr[i]=='a'||))
     if(arr[i]==a[j]){
        count++;
     }
    
 }
 printf("\n Number of vowels in the string :%d",count);
 }