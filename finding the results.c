#include<stdio.h>
int main()
{
    int m, p, c, total;                        //finding the results
    float avg;
    scanf("%d%d%d",&m,&p,&c);
    if(m>35)
    {
        if(p>35)
        {
            if(c>35)
            {
                total=m+p+c;
                avg=(float)total/3;
                printf("The result is Pass");
                printf("\nThe total marsks= %d \nThe average marsks is= %f",total,avg);
            }
            else
            printf("Failed in Chemistry");
        }
        else 
        printf("Failed in Physics");
    }
    else 
    printf("Failed in Maths");
    return 0;

}
