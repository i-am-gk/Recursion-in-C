#include <stdio.h>
int fibonacci(int n);
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    int result = fibonacci(num);
    printf("Fibonacci sequence at position %d is %d\n", num, result);
    return 0;
}
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base cases: Fibonacci of 0 is 0, Fibonacci of 1 is 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case: Fibonacci of n is the sum of Fibonacci of (n-1) and Fibonacci of (n-2)
}
