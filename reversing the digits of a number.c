#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,s=0;                    //reversing the digits of a number
    scanf("%d",&n);
    while(n>0)
    {
    a=n%10;
    s=s*10+a;
    n=n/10;
    }
    printf("Sum= %d",s);
    return 0;
}
