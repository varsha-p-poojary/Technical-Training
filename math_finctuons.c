#include<stdio.h>
#include<math.h>
int main()
{
    printf("%f",ceil(4.3));             //nearest higher integral value
    printf("\n%f",floor(4.9));          //nearest lower intergral value
    printf("\n%d",abs(-20));            //gives the absolute value
    printf("\n%f",fabs(-20.25));        //gives the absolute value with float
    printf("\n%f",sqrt(25));            //never calculates sqaure root of negative number
    printf("\n%f",pow(2,3));            //square
    printf("\n%f",log(2));    
    printf("\n%f",log10(2));            //base
    printf("\n%f",exp(2));              //e power 2
    printf("\n%f",sin(30));             //takes radians
    printf("\n%f",cos(30)); 
    printf("\n%f",tan(30)); 
    printf("\n%f",round(4.3));
    printf("\n%f",round(4.8));

    return 0;

}
