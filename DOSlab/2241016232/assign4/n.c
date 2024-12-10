#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(){ 
    pid_t pid;
    int i=5;
    pid=vfork();
    if(pid==0){
        printf("child = %d \n",i);
        _exit(0);
    }else{
        // wait(NULL);
        i=i+1;
        printf("parent =%d \n",i);
    }    
return 0;
}