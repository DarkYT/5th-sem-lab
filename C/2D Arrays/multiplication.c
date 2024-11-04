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
  
//   multiplication of matrix -1& 2

   // Matrix multiplication
    int arr3[row][col1];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col1; j++) {
            arr3[i][j] = 0;
            for (int k=0; k<col; k++) {
                arr3[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    // Print the result
    printf("\nPrint the multiplication is:\n");
    for (int i=0; i<row; i++) {
        for (int j=0; j<col1; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

















//    printf("\n print in COM \n");
//    for (int i=0;i<col;i++){
//     for(int j=0;j<row;j++){
//         printf("%d ",arr[j][i]);
//     }
//     printf("\n");
//    }
//    for (int i=0;i<col;i++){
//     for(int j=0;j<row;j++){

//         printf("%d ",arr[j][i]);
//     }
//     printf("\n");
//    }
    
return 0;
}