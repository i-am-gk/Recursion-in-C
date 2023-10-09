#include <stdio.h>
int sum(int n);
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    int result = sum(num);
    printf("Sum of natural numbers from 1 to %d is %d\n", num, result);
    return 0;
}
int sum(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 is 0
    }
    return n + sum(n - 1); // Recursive case: sum of n is n + sum of (n-1)
}


