#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char us[100],count=0;
    int i,up=0,fdig=0, lo=0, dig=0,sp=0,und=0,spl=0;
    printf("Enter your user name: ");
    gets(us);
    for(i=0;us[i]!='\0';i++)
    {
        count++;
    }
        
    if(count>=5)
    {
        for(i=0;us[i]!='\0';i++)
        {
            if(isdigit(us[0]))
            fdig++;
            else if(isdigit(us[i]))
            dig++;
            if(isupper(us[i]))
            up++;
            else if(islower(us[i]))
            lo++;
            else if(isspace(us[i]))
            sp++;
            else if(us[i]=='_')
            und++;
            else
            spl++;
        }
        if(fdig==0&&spl==0&&sp==0)
        {
            if(up||lo||und||dig)
            printf("Valid");
            else
            printf("Invalid");
        }
        else
            printf("Invalid");
    }
    else
            printf("Invalid");
}