#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, count=0;
    printf("Enter a number ");          
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)                        //medium method to check if the number is prime
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
    printf("Prime");
    else
    printf("Not a prime");
    return 0; 
}
