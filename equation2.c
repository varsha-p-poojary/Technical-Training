#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z;
    printf("Enter the two numbers : ");
    scanf("%f%f",&x,&y);
    z = (log(x) + log10(x)+exp(x))/sqrt(y);
    printf("The output is %f",z);
    return 0;
}
