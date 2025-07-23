//write a program to swap given two integer values by using third variable
#include<stdio.h>
int main()
{
   int a, b, temp;
   printf("Enter the two numbers: ");
   scanf("%d%d",&a,&b);
   printf("Before swapping:\na=%d\nb=%d",a,b);
   temp = a;
   a=b;
   b= temp;
   printf("\nAfter swapping:\na=%d\nb=%d",a,b);
}
