#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(){ 
    if(vfork()==0){
        printf("1");
        _exit(0);
    }else{
        // wait(NULL);
        printf("2");
        printf("3");
    }    
return 0;
}