#include<stdio.h>
int addition ( int a, int b)
{
    return a+b;
}
int sub ( int a, int b)
{
    return a-b;
}
int mul ( int a, int b)
{
    return a*b;
}
float div ( float a, float b)
{
    return a/b;
}
int main()
{
  int x,y;
  printf("Enter two numbers: ");
  scanf("%d%d",&x,&y);
  printf("\nAddition = %d",addition(x,y));
  printf("\nSubtraction = %d",sub(x,y));
  printf("\nMultiplication = %d",mul(x,y));
  printf("\nDivision = %f",div(x,y));
  return 0;
}