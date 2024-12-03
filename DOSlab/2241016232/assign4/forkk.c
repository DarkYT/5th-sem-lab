#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(){ 
pid_t pid=fork();
if(pid <0){
    printf("Fork faild \n");
    return 1;
}else if (pid ==0){
    printf("Child process id = %d \n", getpid());
    sleep(5);
    printf("chile : Finished execution .\n ");
}else{
    printf("Parent process id = %d \n", getpid());
    wait(NULL);
    printf("Parent: Child process has termminated .\n ");
}
return 0;
}