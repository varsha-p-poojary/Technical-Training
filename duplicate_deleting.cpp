#include<iostream>
#include<stdlib.h>
using namespace std;
int n;
int* uniquearray(int *x)
{
    int count=0,i,j,flag;
    int *y = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        flag =1;
        for(j=0;j<count;j++)
        {
            if(y[j]==x[i])
            flag=0;
        }
        if(flag==1)
        y[count++]=x[i];
    }
    n=count;
    y=(int*)realloc(y,count*sizeof(int));
    return y;
}

int main()
{
    int *q,i;
    cout<<"Enter the number of elements in the dynamic memory allocations: ";
    cin>>n;
    int *b=(int*)malloc(n*sizeof(int));
    cout<<"Enter "<<n<< " number of elements for the dynamic array";
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    q= uniquearray(b);
    cout<<"Unique elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<q[i]<<"\t";
    }
    return 0;
}