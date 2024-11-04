#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int i=0;
    scanf("%d",&n);
      while(n!=0){
       int digit = n%10;
       int place=digit*pow(10,i);
               printf("%d\n",place);
       n=n/10;
       i++;

    }
    return 0;
}