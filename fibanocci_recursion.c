#include <stdio.h>
int fibonacci(int a, int b, int limit) {
    int next = a + b;
    if (next > limit)
        return 0;
    printf("%d ", next);
    return fibonacci(b, next, limit);
}

int main() {
    int n;
    printf("Enter the maximum value: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d: ", n);
    printf("0 1 ");
    fibonacci(0, 1, n);
    return 0;
}
