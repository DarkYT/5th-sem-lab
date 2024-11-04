#include <stdio.h>

    int main(){
          int a,b,c;
          scanf("%d",&a);
          scanf("%d",&b);
          scanf("%d",&c);
          if(a>b && a>c){
            printf("%d is the greatset ",a);
            
          }
          else if(b>c && b>a){
            printf("%d is the greatset ",b);

          }
            else{
            printf("%d is the greatset ",c);

          }
    }

