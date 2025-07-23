#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
    int n,i,count,j,s=INT_MAX, l=INT_MIN,prime=0,flag=0,x,y,c=0; 
    printf("Enter the size: ");
    scanf("%d",&n);
    int  a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        count=0;
        if(i!=1)
        {
         for(j=2;j<=sqrt(a[i]);j++)                      //shortest method to check if the number is prime
        {
           if(a[i]%j==0)
           count++;
        }
        if(count==0)
        {
            if(a[i]>l)
            l=a[i];
            else
            s=a[i];
            prime++;
        }    
        }
    }
    x=s;
    y=l;
    while(x<=y)
    {
    for(i=2;i<=sqrt(x);i++)
    {
        if (x%i==0)
        {
        c++;
        }
    }
        if(c==0)
        {
           for(j=0;j<n;j++)
           {
            flag=0;
            if(a[j]==x)
            flag = 1;
            if(flag==1)
            goto b; 
           }
           if(flag!=1)
           goto a;
        }
      b: x++;
    }
a:if(prime==0)
printf("Prime array");
else if(l==s)
printf("Prime array");
else if(flag==1)
printf("Prime array");
else
printf("Not a Prime array");
return 0;
}