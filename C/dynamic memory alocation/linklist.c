#include <stdio.h>
#include <stdlib.h>

 int main(){ 
   int a;
   struct Node n1;
   printf("enter the data for node-%d",1);
   n1.next=NULL;

   struct Node n2;
   printf("enter the data for node-%d",2);
   printf("\n %d",n2.data);
   n2.next=NULL;
   n1.next=&n2;

   struct Node n3;
   printf("enter the data for node-%d",3);
   printf("\n %d",n3.data);
   n3.next=NULL;
   n2.next=&n3;

   struct Node *currentP;
   currentP=&n1;
   int i=1;
   while(currentP!=NULL){
    printf("\n n%d.data=%d",i,CurrentP->data);
    currentP=currentP->next;
    i++;
   }
   int  keyData;
   printf("enter the new data, which you wish to insert : ");
   scanf()


    return 0;
 }