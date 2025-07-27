#include<stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter the row and column");
    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}
