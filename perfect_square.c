#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s,k;
    float m;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        m=sqrt(a[i]);
    k = (int)m;
    s=k*k;
    if(s==a[i])
    
    printf("%d\t",a[i]);
    }
    return 0;
}