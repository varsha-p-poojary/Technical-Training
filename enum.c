#include<stdio.h>
int main()
{
    enum week
    {
        mon, tue, wed, thur, fri, sat
    } a;
    a=thur;
    printf("%d",a);
    return 0;
}