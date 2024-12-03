#include <stdio.h>
#include <string.h>
struct ABC{
    int srno;
    char name[30];
    int marks[5];
    float avg;

};
float aveg(int*p){
  float sum =0; 
  for(int i=0;i<5;i++){
    sum+=*(p+i);
  }
  return sum/5;
}
 int main(){ 
 struct ABC a[5];