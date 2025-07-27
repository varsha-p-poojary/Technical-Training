#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char sn[100], ad[100];
    printf("Enter your name: ");
    gets(sn);
    printf("Enter your address: ");
    gets(ad);
    printf("name = %s",sn);
    printf("name = %s",ad);
    return 0; 
}
