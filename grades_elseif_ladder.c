#include<stdio.h>
int main()
{
    float m,p,c,avg;
    printf("Enter the marks in 3 subjects\n");
    scanf("%f%f%f",&m,&p,&c);
    avg = (m+p+c)/3;
    if(avg>90)
    printf("Grade=A+");
    else if(avg>80)
    printf("Grade=A");
    else if(avg>70)
    printf("Grade=B+");
    else if(avg>60)
    printf("Grade=B");
    else if(avg>50)
    printf("Grade=C");
    else if(avg>40)
    printf("Grade=D");
    else if(avg>35)
    printf("Grade=E");
    else 
    printf("Grade=F");
    return 0;
}