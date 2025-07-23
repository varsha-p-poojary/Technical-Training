#include<stdio.h>
int main()
{
    float a = 5.2;
    double b = 5.2;
    printf("%.1f\n",a);
    printf("%f\n",b);
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    return 0;
}
