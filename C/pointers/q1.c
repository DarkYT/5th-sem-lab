#include <stdio.h>
int main(){ 

int a= 2352;
// scanf("%d enter the num ",&a);
int *p=&a;
int sum=0;
while(*p!=0){
  int dig= *p%10;
  sum+=dig;
  *p=*p/10;
}
printf("%d \n ",sum);

return 0;
}
// #include <stdio.h>

// int main() { 
//     int a = 2352;
//     // scanf("%d", &a); // Uncomment this line to take user input
//     int sum = 0; // Use an integer to store the sum
//     int *p = &a; // Pointer to the integer variable

//     while (*p != 0) {
//         int dig = *p % 10; // Get the last digit
//         sum += dig; // Add the digit to sum
//         *p = *p / 10; // Remove the last digit
//     }

//     printf("%d\n", sum); // Print the sum of digits

//     return 0;
// }