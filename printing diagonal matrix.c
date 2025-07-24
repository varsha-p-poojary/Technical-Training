#include<stdio.h>
int main()
{
    int r,i,j;                                    //printing diagonal matrix
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
        printf("%d\t",a[i][i]);
    }
    printf("\n");
return 0; 
}
