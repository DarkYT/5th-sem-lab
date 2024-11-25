#include <stdio.h>
#include <string.h>
struct ABC{
    int srno;
    char name[30];
    int marks[5];
    int avg;

};
int avg(int[] marks){
  sum =0; 
  for(int i=0;i<5;i++){
    sum+=marks[i];
  }
  return sum/5;
}
 int main(){ 
 struct ABC a[5];
 a[0].srno=1;
 strcpy(a[0].name," spandan ");
 a[0].marks[0] = 90; a[0].marks[1] = 45; a[0].marks[2] = 34; a[0].marks[3] = 43; a[0].marks[4] = 34;
 
 a[1].srno=2;
 strcpy(a[1].name," rohan ");
//  a[1].marks={23,45,44,66,5};
//  a[1].avg=avg(a[1].marks);


 a[2].srno=3;
 strcpy(a[2].name," ayush");
//  a[2].marks={3,5,34,43,34};
//  a[2].avg=avg(a[2].marks);


 a[3].srno=4;
 strcpy(a[3].name," ankit ");
//  a[3].marks={23,34,5,43,34};
//  a[3].avg=avg(a[3].marks);


 a[4].srno=5;
 strcpy(a[4].name," saurya ");
//  a[4].marks={3,53,53,56,34};
//  a[4].avg=avg(a[4].marks);


printf("%d ,%s  %d",a[0].srno,a[0].name,a[0].avg);
return 0;
}