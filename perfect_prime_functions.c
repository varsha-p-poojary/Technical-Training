#include<stdio.h>
#include<math.h>
int perfect_prime(int n)
{
    int m, i,count=0 ,r,sum=0,c=0,b=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
    {
        while(n>0)
        {
            r=n%10;
            if(r==2||r==3||r==5||r==7)
            c++;
            n=n/10;
            sum=sum+r;
        }
        if(c!=0)
        {
            for(i=2;i<=sqrt(sum);i++)
            {
                if(sum%i==0)
                b++;
            }
            if(b==0)
            return 1;
            else
            return 0;
        }
        else
            return 0;
    }
    else
        return 0;
    
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(perfect_prime(n))
    printf("Perfect prime");
    else
    printf("Not a perfect prime");
    return 0;
}