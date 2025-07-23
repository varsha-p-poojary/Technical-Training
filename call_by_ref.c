#include<stdio.h>
int sum(int *a, int *b, int c)
{
    int i, sum=0;
    for(i=0;i<c;i++)
    sum=sum+a[i]+b[i];
    return sum;
}
int main()
{
    int m,i;
    printf("Enter the size: ");
    scanf("%d",&m);
    int x[m], y[m];
    printf("Enter the elments for the first array: ");
    for(i=0;i<m;i++)
    scanf("%d",&x[i]);
    printf("Enter the elments for the second array: ");
    for(i=0;i<m;i++)
    scanf("%d",&y[i]);
    printf("Sum=%d",sum(x,y,m));
    return 0;
}