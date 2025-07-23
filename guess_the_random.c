#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int x,ran,n=0;
    srand(time(0));
    x=(rand()%100)+1;
    
    while(n!=5)
    {
        printf("Enter a number: ");
        scanf("%d",&ran);
        if(ran>x)
        printf("Your number is greater than the random number.Retry!\n");
        else if(ran<x)
        printf("Your number is smaller than the random number.Retry!\n");
        else
        {
        printf("Hurry you found it");
        break;
        }
        n++;
    }
    if(n==5)
    printf("You lost!");
    return 0;
}