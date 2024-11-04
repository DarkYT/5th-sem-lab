#include <stdio.h>
 int main(){ 
int arr2d[2][3]={{1,2,3},{11,22,33}};
// int *p; // single pointer 
// p=*arr2d;
int (*p)[3];  // this is a pointer to a 1d array
p=arr2d;
for(int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        // printf("\n %d ",*(p+i*3+j));
        printf("\n *(*(p+ %d)+%d) : %d ",i,j,*(*(p+i)+j));
    }

}
return 0;
}