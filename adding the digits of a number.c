#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,s=0;                    //adding the digits of a number
    scanf("%d",&n);
    while(n>0)
    {
    a=n%10;
    s=s+a;
    n=n/10;
    }
    printf("Sum= %d",s);
    return 0;
}
