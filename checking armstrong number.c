#include<stdio.h>
#include<math.h>
int main()
{
    int n, d=0, sum=0, r, x, y;               //to check whether the number is armstrong number or not
    printf("Enter a number: ");
    scanf("%d",&n);
    x=n;
    y=n;
    while(n>0)
    {
        d++;
        n=n/10;
    }
    while(x>0)
    {
        r=x%10;
        sum=sum+pow(r,d);
        x=x/10;
    }
    if(y==sum)
    printf("Arm strong number");
    else
    printf("Noy an arm strong number");
    return 0;

    }
