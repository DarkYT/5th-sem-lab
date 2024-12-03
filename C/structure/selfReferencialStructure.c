#include <stdio.h>
// #include <alloc.h>
#include <stdlib.h>
void main(){ 
    // struct Node* start = null;
    int * pa= (int*) malloc(5*sizeof(int));
    int * pb= (int*) malloc(5*sizeof(int));
    int * pc= (int*) malloc(5*sizeof(int));
    
    printf("enter a & b :");
    scanf("%d %d",pa,pb);
    
    *pc= *pa + *pb;
    printf("c= %d" ,*pc);


}