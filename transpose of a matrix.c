#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0,one=0;                            //transpose
    printf("Enter the : ");
    scanf("%d%d",&r,&c);
    int  a[r][c];
    int b[c][r];
    printf("Enter the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
    }
}
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
