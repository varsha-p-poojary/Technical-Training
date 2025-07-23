#include<stdio.h>
int main()
{
    int n,l=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>l)
        l=r;
        n=n/10;
    }
    printf("%d",l);
    return 0 ;
}