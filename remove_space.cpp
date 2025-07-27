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
        if(!(isspace(s[i])))
            y[count++]=s[i];
    }
    y[count] = '\0';
    y = (char*)realloc(y, count * sizeof(char));
    return y;
}

int main()
{
    char *p = (char*)malloc(1000 * sizeof(char));
    gets(p);
    int n = strlen(p);
    char *q=withoutSplChars(p, n);
    puts(q);
    return 0;
}
