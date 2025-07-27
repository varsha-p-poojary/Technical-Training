#include<stdio.h>

int main()
{
    int n;
    float a, b, area;
    printf("Choose any one of the following\n");
    printf("1. Area of Square\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n");
    printf("4. Area of Triangle\n");
    printf("Enter your option: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Enter the side: ");
            scanf("%f", &a);
            area = a * a;
            printf("Area of Square = %f", area);
            break;

        case 2:
            printf("Enter the two sides: ");
            scanf("%f%f", &a, &b);
            area = a * b;
            printf("Area of Rectangle = %f", area);
            break;

        case 3:
            printf("Enter the radius: ");
            scanf("%f", &a);
            area = 3.14 * a * a;
            printf("Area of Circle = %f", area);
            break;

        case 4:
            printf("Enter the base and height: ");
            scanf("%f%f", &a, &b);
            area = 0.5 * a * b;
            printf("Area of Triangle = %f", area);
            break;

        default:
            printf("Invalid option");
            break;
    }

    return 0;
}
