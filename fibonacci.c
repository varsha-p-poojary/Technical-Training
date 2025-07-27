#include <stdio.h>
int main() {
    int n;
    int first = 0, second = 1, next = 0;
    printf("Enter the maximum value: ");
    scanf("%d", &n);
    while (next <= n) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
    return 0;
}
