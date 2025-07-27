#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n == 0 || n == 1) {
        printf("%d is a Fibonacci number.\n", n);
        return 0;
    }
    while (next < n) {
        next = a + b;
        a = b;
        b = next;
    }
    if (next == n)
        printf("True\n");
    else
        printf("False");
    return 0;
}
