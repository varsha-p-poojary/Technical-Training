#include<stdio.h>
int main()
{
    int r,i,j,sum=0,one=0;
    printf("Enter the : ");
    scanf("%d",&r);                                          //checking if identity matrix
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
        for(j=0;j<r;j++)
        {
            if(i==j)
            one =one+a[i][j];
            else
            sum=sum+a[i][j];
        }
    }
    if(one==r && sum==0)
    printf("Diagonal matrix");
    else
    printf("Not a diagonal matrix");
return 0;
}
