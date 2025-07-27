#include<stdio.h>
int main()
{
    int a;                                             // even or odd using bitwise operator only
    printf("Enter a number : ");
    scanf("%d",&a);
    ((a&1)==0)? printf("Even"):printf("Odd");
    return 0; 
}
