#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
 int main(){ 
   int pid1=fork();

   if(pid1=0){
    sleep(10);
    printf("hello\n");
    return;
   }
   else{
    int i1=wait(NULL);
    printf("Hii\n");
    while (1);  
    return;
    
    
   }
return 0;
}