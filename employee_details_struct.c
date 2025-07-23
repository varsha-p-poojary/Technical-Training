#include<stdio.h>
int main()
{
    int total;
    struct employee
    {
        int id;
        float s,x;
        char a[100];
        char b[100];
    }d;

    printf("Enter the name: ");
    gets(d.a);
    printf("Enter the employee ID: ");
    scanf("%d",&d.id);
    printf("Enter the employee salary: ");
    scanf("%f",&d.s);
    printf("Enter the employee experience: ");
    scanf("%f",&d.x);
    printf("Enter the department: ");
    scanf("%s",&d.b);
    printf("Employee Name: ");
    puts(d.a);
    printf("Employee id = %d\nEmployee salary = %f\nEmployee experience = %f\nEmployee department = %s\n",d.id,d.s,d.x,d.b);
    return 0;
}