#include<stdio.h>
#include<math.h>
int prime(int a)
{
    int i, count =0;
    for(i=2;i<=sqrt(a);i++)                      //shortest method to check if the number is prime
    {
        if(a%i==0)
        count++;
    }
    return count;
}

int main()
{
    int n, flag;
    printf("Enter a number ");         
    scanf("%d",&n);
    flag = prime(n);
    if(flag==0)
    printf("Prime number");
    else
    printf("Not a prime number");
    return 0;
}