#include<stdio.h>
int main()
{
    int n,m,i,j,k;
    int c[k];
    printf("Enter the size of a: ");
    scanf("%d",&n);
    printf("Enter the size of b: ");
    scanf("%d",&m);
    int  a[n], b[m];
    printf("Enter the elements of a\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the elements of b\n");
    for(j=0;j<m;j++)
        scanf("%d",&b[j]);    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[j]==a[i])
            c[j]=a[j];
        }
    }
    print("%d",c[k]);
    return 0;
}