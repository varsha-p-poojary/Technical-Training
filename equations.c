#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z,a,b,c;
    printf("Enter the two numbers : ");
    scanf("%f%f",&x,&y);
    z = (sin(x) + cos(y))/tan(y);
    a = sqrt((log(x) + exp(y))/log10(x));
    b = (log(pow(x,y))+exp(pow(x,y)))/pow(x,y);
    c = (sin(x)+tan(x)+cos(x))/log10(pow(x,y));
    printf("The output is\n\n1. %f\n2. %f\n3. %f\n4. %f",z,a,b,c);
    return 0;

}
