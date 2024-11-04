#include <stdio.h>
 int rec(int);
 int rec(int n){
    int sum=0;
    if(n==0){
        return sum;

    }
    else{
        sum=n+rec(n-1);
        // return sum;
    }
 }

 int main(){ 
  printf("%d \n", rec(5));
 

return 0;
}