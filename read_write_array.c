#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int  a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        printf("%d\t",a[i]);
        
    }
    return 0;
}
