#include<stdio.h>
int main()
{
    int a=5, b=2;
    float c;
    char d='B';
    c= (float)a/b; //explicit type casting
    printf("%f",c);
    printf("%d",d); //implicit type conversion
    return 0;
}
