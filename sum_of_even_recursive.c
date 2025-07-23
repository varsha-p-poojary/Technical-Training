#include<stdio.h>
int sum_of_even(int n, int s)
{
    if(n==0)
    return s;
    else{
        if(n%2==0)
        s=s+n;
        sum_of_even(n-1,s);
    }
}
int main()
{
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum=sum_of_even(n,sum);
    printf("Sum = %d",sum);
    return 0;
}
