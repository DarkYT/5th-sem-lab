#include <stdio.h>
 int main(){ 
int a,b,c;
int *p, *q,*r;
p=&a;
q=&b;
r=&c;
printf("Enter the values :");
scanf("%d %d %d",p,q,r );
if(((*p)>(*q))&&((*p)>(*r))){
    printf("a is greater");
}
if(((*q)>(*r))&&((*q)>(*p))){
    printf("a is greater");
}else{
    printf("c is greater");
}
return 0;
}