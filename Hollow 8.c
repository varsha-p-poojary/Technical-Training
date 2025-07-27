#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the row");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(i == 1 || i == n || i == (n + 1) / 2)
        {
            for(j = 1; j <= n; j++)
                printf("* ");
        }
        else
        {
            for(j = 1; j <= n; j++)
            {
                if(j == 1 || j == n)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
