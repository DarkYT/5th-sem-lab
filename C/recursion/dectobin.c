#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    
    decimalToBinary(n / 2);
    
    printf("%d", n % 2);
}

int main() {
    int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Binary representation: 0\n");
    } else {
        printf("Binary representation: ");
        decimalToBinary(number);
        printf("\n");
    }

    return 0;
}