#include<stdio.h>
#include<string.h>
#include<ctype.h>
int operation(char *s, int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(isalpha(s[i]))
        {
            if(!(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'))
            {
            count++;
            }
        }
    }
    return count;
}
int main()
{
    char a[100];
    printf("Enter the string: ");
    gets(a);
    int size=strlen(a);
    printf("The number of consonents = %d", operation(a,size));
    return 0;
}