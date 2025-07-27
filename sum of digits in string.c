#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{

    char a[100];
    int i, sum=0,n,j;
    printf("Enter a string : ");
    gets(a);
    printf("%s \n", a);
    for(i=0;a[i]!='\0';i++)
    {
        n=0;
        if(isdigit(a[i]))
        {
            n=a[i]-48;
            for(j=i+1;a[j]!='\0';j++)
            {
                if(isdigit(a[j]))
                    n=n*10+a[j]-48;
        
                else
                {
                    break;
                }
            }
            i=j;
            sum=sum+n;
        }
    }
    printf("Sum=%d",sum);
    return 0;

}
