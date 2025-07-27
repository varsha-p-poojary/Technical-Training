#include<iostream>
using namespace std;
int febTerm(int n)
{
    int a=1, b=1, c, count=2;
    if(n==1||n==2)
    return a;
    while(1)
    {
        count++;
        c=a+b;
        a=b;
        b=c;
        if(count==n)
        return c;
    }
}
int main()
{
    int n, x;
    cout<<"Enter the number";
    cin>>n;
    x=febTerm(n);
    cout<<x;
}