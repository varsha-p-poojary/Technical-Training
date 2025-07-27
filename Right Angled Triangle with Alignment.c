#include<stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the row");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < n; j++)
        {
            printf("  ");
        }
        for(k = i; k < n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
