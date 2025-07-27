#include<iostream>
using namespace std;
bool  check(int x)
{
    if(x%2==0)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b;
    cout<<"Enter the a numbers: ";
    cin>>a;
    b=check(a);
    if(b==1)
    cout<<"The number is even";
    else
    cout<<"The number is odd";
    return 0;
}