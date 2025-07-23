#include<stdio.h>
int c;
int add(int a, int b)
{
    c=a+b;
    return c;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    c=add(x,y);
    printf("Sum= %d",c);
    return 0;
}