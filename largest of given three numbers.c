#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the three numbers: ");
scanf("%d%d%d",&x,&y,&z);
(x>y && x>z)? printf("%d is the greatest of all three",x):(y>x && y>z)? printf("%d is the greatest of all three",y): printf("%d is the greatest of all three",z);
return 0;
}
