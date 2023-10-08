#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
