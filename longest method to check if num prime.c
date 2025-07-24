#include<stdio.h>
#include<math.h>
int main()
{
  int n, i, count=0;
    printf("Enter a number ");             //longest method to check if the number is prime
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("Prime");
    else
    printf("Not a prime");
    return 0;
       }
