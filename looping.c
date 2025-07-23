#include<stdio.h>
#include<math.h>
int main()
{
    int n, i=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<n)                            //while loop
    {
        printf("Varsha\n");
        i++;
    }
    
    i=0;                                  //do while loop
    do
    {
       printf("Varsha\n");
       i++;
    } 
    while (i<n);

    for(i=0;i<n;i++)                      //for loop
    {
        printf("Varsha\n");
    }
    
return 0;
}
