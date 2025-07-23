#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,l=-1000000000;
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
        if(a[i]>l)
        l=a[i];
    }
    printf("largest = %d",l);
    return 0;
}
