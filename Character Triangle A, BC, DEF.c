#include<stdio.h>
int main()
{
    int i, j, n;
    char c = 'A';
    printf("Enter the row");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
