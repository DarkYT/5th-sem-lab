#include <stdio.h>
 int main(){ 
int i, *p,sum=0, *s;
p=&i;
s=&sum;

for ( (*p)=1; (*p)<=100; (*p)++ ){
    if ((*p)%2==0){
    (*s) += (*p);

    }
}
printf("\n %d", (*s));
return 0;
}
