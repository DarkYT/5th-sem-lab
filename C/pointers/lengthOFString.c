#include <stdio.h>
int main(){ 
char arr[20];
char *p;
p=arr;
int count = 0;
printf("\n Enter a string  :");
gets(p);
// puts(p);
int len1 = strlen(p);
int *q=&len1;
printf("%d \n",(*q));

for (int i=(*q);i>=0;i--){
    printf("%c",*(p+i));
}
return 0;
}
