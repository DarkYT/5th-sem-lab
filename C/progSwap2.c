#include <stdio.h>
#include <stdlib.h>
void main(int argc, char* argv[]){
  int a,b;
  if(argc<3){
  printf("dear, please enter sufficient command-line argumnt");
  }
  else{
  a=atoi(argv[1]);
  b=atoi(argv[2]);
  int temp =a;
  a=b;
  b=temp;
  printf("after swapping : %d %d",a,b);
  printf("\n value fo argc is %d : ",argc);
 } 
}
