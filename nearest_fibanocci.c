#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int a = 0, b = 1, next = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("Nearest Fibonacci number: %d\n", n);
        return 0;
    }

    while (next < n) {
        next = a + b;
        a = b;
        b = next;
    }

    if (abs(a - n) < abs(next - n))
        printf("Nearest Fibonacci number: %d\n", a);
    else
        printf("Nearest Fibonacci number: %d\n", next);

    return 0;
}
