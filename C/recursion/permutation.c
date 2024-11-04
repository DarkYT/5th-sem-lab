#include <stdio.h>

int permutation(int n, int r) {
    if (r == 0) {
        return 1;
    }
    if (r > n) {
        return 0;
    }
    return n * permutation(n - 1, r - 1);
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    int result = permutation(n, r);
    printf("P(%d, %d) = %d\n", n, r, result);

    return 0;
}