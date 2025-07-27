#include<iostream>
#include<ctype.h>
using namespace std;
char* convert(char* a)
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0)
        a[i]=toupper(a[i]);
        if (isspace(a[i]))
        a[i+1]=toupper(a[i+1]);
    }
    return a;
}
int main()
{
    char s[100], x[100];
    cout<<"Enter the string: ";
    gets(s);
    convert(s);
    puts(s);
    return 0;
}
