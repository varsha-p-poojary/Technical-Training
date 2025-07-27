#include <stdio.h>

int countFibonacci(int n) {
    int a = 0, b = 1, next = 0;
    int count = 1;

    if (n == 0)
        return 1;

    while (b <= n) {
        count++;
        next = a + b;
        a = b;
        b = next;
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countFibonacci(n));
    return 0;
}
