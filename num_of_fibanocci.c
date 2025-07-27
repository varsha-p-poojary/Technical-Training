#include <stdio.h>
int main() {
    int start, end;
    int a = 0, b = 1, count = 0, next = 0;
    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);
    if (start <= 0 && end >= 0)
        count++;
    if (start <= 1 && end >= 1)
        count++;
    next = a + b;
    while (next <= end) {
        if (next >= start)
            count++;
        a = b;
        b = next;
        next = a + b;
    }
    printf("Count = %d\n", count);
    return 0;
}
