#include<stdio.h>
int main()
{
    int a;                                           //conditional operation - even or odd
    printf("Enter a number : ");
    scanf("%d",&a);
    ((a%2)==0)? printf("Even"):printf("Odd");
    return 0; 
}
