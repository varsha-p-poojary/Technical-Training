#include <stdio.h>

int countDivisibleFibonacci(int n, int x) {
    int a = 0, b = 1, next = 0;
    int count = 0;

    if (a <= n && a % x == 0)
        count++;

    if (b <= n && b % x == 0)
        count++;

    next = a + b;

    while (next <= n) {
        if (next % x == 0)
            count++;
        a = b;
        b = next;
        next = a + b;
    }

    return count-1;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    printf("%d\n", countDivisibleFibonacci(n, x));
    return 0;
}
