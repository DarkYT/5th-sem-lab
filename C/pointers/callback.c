#include <stdio.h>
void display(){
    printf("abra ka dabra ");

}
void execute (void (*ptr) ()){
    ptr();
}
 int main(){ 
 void (*p)();
 p=&display;
 execute(p);

return 0;
}