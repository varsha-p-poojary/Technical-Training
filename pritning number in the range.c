#include<stdio.h>
#include<math.h>
int main()
{
int s,e;
    printf("Enter the range");             //pritning number in the range
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        printf("%d\t",s);
        s++;
    }
return 0;
}
