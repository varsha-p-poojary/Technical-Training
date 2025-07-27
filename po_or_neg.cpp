#include<iostream>
using namespace std;
int  check(int x)
{
    if(x>0)
    return 1;
    if(x<0)
    return 0;
}

int main()
{
    int a;
    cout<<"Enter a numbers: ";
    cin>>a;
    if(check(a)==1)
    cout<<"The number is positive";
    else
    cout<<"The number is negative";
    return 0;
}