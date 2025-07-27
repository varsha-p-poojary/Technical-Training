#include<stdio.h>

int main()
{
    int a, b, n;
    float c;

    printf("Choose any one of the following operations:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your option: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            c = a + b;
            printf("Addition = %f", c);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            c = a - b;
            printf("Subtraction = %f", c);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            c = a * b;
            printf("Multiplication = %f", c);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            if (b == 0)
                printf("Division by zero is not allowed.");
            else {
                c = (float)a / b;
                printf("Division = %f", c);
            }
            break;

        default:
            printf("Invalid option");
            break;
    }

    return 0;
}
