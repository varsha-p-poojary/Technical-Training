#include<stdio.h>
int even_or_odd(int a)
{
    
    if((a%2)==0)
    return 1;
    else 
    return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(even_or_odd(n))
    printf("Even");
    else
    printf("Odd");
    return 0;
}