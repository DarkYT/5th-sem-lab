#include <stdio.h>
// #include <alloc.h>
#include <stdlib.h>
void main(){ 
    // struct Node* start = null;
    int * pa= (int*)calloc(1,5*sizeof(int));
    int * pb= (int*)calloc(1,5*sizeof(int));
    int * pc= (int*)calloc(1,5*sizeof(int));
    
    printf("enter a & b :");
    scanf("%d %d",pa,pb);
    
    *pc= *pa + *pb;
    printf("c= %d" ,*pc);
    
    free(pc);
    printf("\n sorry ! c=%d ", *pc);

    int *pp =(int )malloc(5*sizeof(int));
 
}