#include<stdio.h>
int factorial(int n, int s)
{
    if(n==0)
    return s;
    else{
    
        s=s*n;
        factorial(n-1,s);
    }
}
int main()
{
    int n,sum=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum=factorial(n,sum);
    printf("factorial  = %d",sum);
    return 0;
}
