#include<stdio.h>
int main()
{

int a, b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
(a>b)? printf("%d is the smallest number\n",b) : printf("%d is the smallest number\n",a);
return 0;
}
