#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,s=0,m;                    //checking if palindrome
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
    a=n%10;
    s=s*10+a;
    n=n/10;
    }
    if(s==m)
    printf("Palindrome");
    else
    printf("Not a palindrome");
    return 0;
}
