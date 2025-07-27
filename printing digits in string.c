#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100];
    int i, sum=0;
    printf("Enter a string : ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(isdigit(a[i]))
        {
            a[i]=a[i]-48;
            sum=sum+a[i];
        }
    }
    printf("Sum=%d",sum);
    return 0;
}
