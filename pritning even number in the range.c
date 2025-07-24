#include<stdio.h>
#include<math.h>
int main()
{
   int s,e,sum=0;
    printf("Enter the range");             //pritning even number in the range
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        if(s%2==0)
        sum=sum+s;
        s++;
    }
    printf("Sum=%d",sum);
    return 0;
}
