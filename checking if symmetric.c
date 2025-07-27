#include<stdio.h>
int main()
{
    int r,c,i,j,flag=0;                              //checking if symmetric
    printf("Enter the : ");
    scanf("%d",&r);
    int  a[r][r];
    printf("Enter the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
    }
}
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(a[i][j]!=a[j][i])
            flag=1;
        }
    }
    if(flag==0)
    printf("Symmetric");
    else
    printf("Not symmetric");
    
return 0;

}
