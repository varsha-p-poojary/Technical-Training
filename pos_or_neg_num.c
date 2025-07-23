#include<stdio.h>
int main()
{
int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The given number is positive");
        printf("\nNumber = %d",a);
    }
    else 
    {
       printf("The given number is Negative");
       printf("\nNumber = %d",a); 
    }
    return 0;
}
