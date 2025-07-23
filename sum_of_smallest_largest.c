#include<stdio.h>
int main()
{
    int n,l=0,s=10,r,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>l)
        l=r;
        if(r<s)
        s=r;
        n=n/10;
    }
    sum=l+s;
    printf("%d",sum);
    return 0 ;
}