#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}
void execute(int aa, int bb, int (*ptr)(int , int )){
    printf("\n And : %d" ,ptr(aa,bb));
}
 int main( int argc, char* argv[]){
    // array fo 4 pointers
    if ( argc !=4){
        printf("invalid input");
    }
    else{

    int (*p[4])(int,int)={&add, &sub,&mul,&div};
    int x=atoi(argv[1]);
    int y=atoi(argv[2]);
    int choice=atoi(argv[3]);// 1 to 4
    execute(x,y,p[choice]);
    }
return 0;
}