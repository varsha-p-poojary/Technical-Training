#include<stdio.h>
int main()
{
    //N
    int i, j, n;                                 
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(j == 1 || j == n || i == j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    //I
    printf("\n");
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
        for (j=1;j<=n;j++)
        {
            printf("* ");
        }
        }
        else
        {
            for (j=1;j<=n;j++)
            {
            if(j==3)
            printf("* ");
            else
            printf("  ");
            }
        }
    
        printf("\n");
    }
    


    //T
    
    int m;
    for(m=0;m<2;m++)
    {
        printf("\n");
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
        for (j=1;j<=n;j++)
        {
            printf("* ");
        }
        }
        else
        {
            for (j=1;j<=n;j++)
            {
            if(j==3)
            printf("* ");
            else
            printf("  ");
            }
        }
    
        printf("\n");
    }
}

//E
printf("\n");

for(i=1;i<=n;i++)
    {
        if(i==1||i==n||i==(n+1)/2)
        {
        for (j=1;j<=n;j++)
        {
            printf("* ");
        }
        }
        else
        {
            for (j=1;j<=n;j++)
            {
            if(j==1)
            printf("* ");
            else
            printf("  ");
            }
        }
        printf("\n");
    }
        return 0;
}