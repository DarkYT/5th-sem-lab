#include <stdio.h>
int main(){
    int sum=0;
    for(int i=2;i<=100;i++){
        if((i%2) !=0){
            sum=sum+i;
        }
    }
    printf("\n %d",sum);
    return 0;
}