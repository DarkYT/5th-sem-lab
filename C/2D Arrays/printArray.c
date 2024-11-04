#include <stdio.h>
 int main(){ 
   int row,col;
printf("\n enter the num of rows : ");
   scanf("%d",&row);
   printf(" \n enter the num of columns:");
   scanf("%d",&col);
   int arr[row][col];
 
 printf("enter the matrix \n");
   for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
    }
    
   }
   printf("\n print in RMO \n");
   for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
   printf("\n print in COM \n");
   for (int i=0;i<col;i++){
    for(int j=0;j<row;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
   }
   for (int i=0;i<col;i++){
    for(int j=0;j<row;j++){

        printf("%d ",arr[j][i]);
    }
    printf("\n");
   }
    
return 0;
}