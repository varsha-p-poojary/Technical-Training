#include<stdio.h>
int main()
{
    int r,i,j,sum=0;                                      //adding diagonal and super diagonal numbers
    printf("Enter the : ");
    scanf("%d",&r);
    int  a[r][r];
    printf("Enter the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
        scanf("%d",&a[i][j]);
    }
}
    for(i=0;i<r;i++)
    {
        sum=sum+a[i][i];
        if(i!=r-i-1)
        sum=sum+a[i][r-i-1];
    }
    printf("sum=%d",sum);
return 0;
}
