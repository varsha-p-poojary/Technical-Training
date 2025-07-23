//write a program to swap given two integer values without using 3rd variable 
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping:\na=%d\nb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping:\na=%d\nb=%d",a,b);
}