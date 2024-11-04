#include <stdio.h>
#include <math.h>

#define MAX 10 

int STACK[MAX]; 
int top = -1;  

void doPush(int value) {
    if (top < MAX - 1) {
        STACK[++top] = value; 
    } else {
        printf("Stack Overflow\n");
    }
}

int doPop() {
    if (top >= 0) {
        return STACK[top--]; 
    } else {
        printf("Stack Underflow\n");
        return -1; 
    }
}

int isArmstrong(int number) {
    int temp = number;
    int sum = 0;
    int count = 0;

    while (temp != 0) {
        doPush(temp % 10); 
        temp /= 10;       
        count++;
    }

    while (top != -1) {
        int digit = doPop(); 
        sum += pow(digit, count);
    }

   
    return sum == number;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number); 

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}