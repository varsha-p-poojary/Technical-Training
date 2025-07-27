#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int i;
char* withoutSplChars(char *s, int len)
{
    int count=0;
    char *y=(char*)malloc(len * sizeof(char));
    for (i=0;i<len;i++)
    {
        if (isdigit(s[i]) || isalpha(s[i]) || isspace(s[i]))
            y[count++]=s[i];
    }
    y[count] = '\0';
    y = (char*)realloc(y, count * sizeof(char));
    return y;
}

int main()
{
    char *p = (char*)malloc(1000 * sizeof(char));
    cin>>p;
    int n = strlen(p);
    char *q=withoutSplChars(p, n);
    cout<<q<<endl;
    return 0;
}
