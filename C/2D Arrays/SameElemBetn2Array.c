#include <stdio.h>
 int main(){ 
   int row,col, row1,col1;
//matrix 1
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
// matrix 2
printf("\n enter the num of rows : ");
   scanf("%d",&row1);
   printf(" \n enter the num of columns:");
   scanf("%d",&col1);
   int arr2[row][col];
 
 printf("enter the matrix \n");
   for (int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        scanf("%d",&arr2[i][j]);
    }

   }

    //print the array
   printf("\n print matrix -1 \n");
   for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
   printf("\n print matrix -2 \n");
   for (int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        printf("%d ",arr2[i][j]);
    }
    printf("\n");
   }
int count =0;
  for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            for (int k=0; k<row1; k++) {
              for (int l=0; l<col1; l++) {
                 if(arr[i][j]==arr[k][l]){
                    count++;
                 }
              }
            }
            if(count>0){
                printf(" %d ",arr[i][j]);
            }
        }
    }

 }
 