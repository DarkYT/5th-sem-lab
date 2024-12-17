#include <stdio.h>
#include <unistd.h>
 void main(){ 
 int pid=fork();
 if(pid==0){
    execl("/home/student/sp/file2.txt","file2.txt",NULL);
    printf("\n it is the child in ppp.out file");
 }
 printf("\n it is the parent in ppp.out file");
return 0;
}