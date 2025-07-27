#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char sn[100];
    int i,count=0;
    printf("Enter your name: ");
    gets(sn);
    for(i=0;sn[i]!='\0';i++)
    {
        if(isupper(sn[i]))
        count++;
    }
    printf("Count  = %d",count);
    
    return 0; 
}
