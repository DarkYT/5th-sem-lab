#include <stdio.h>
 int main(){ 
int num, *p;
p=&num;
printf("enter the num ");
scanf("%d",p);
int sum=0 , *s=&sum;
int backup= (*p);
int *b=&backup;

while((*p)!=0){
    int rem , *r=&rem;
    (*r)=(*p)%10;
    (*s)= (*s)*10+(*r);
    (*p)=(*p)/10;

}
if ((*b) ==(*s)){
printf("palindrom");
}else{
    printf("\n not");
}
return 0;
}