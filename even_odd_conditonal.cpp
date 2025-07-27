#include<iostream>
using namespace std;
int  check(int x)
{
    (x>0)? cout<<"The number is positive" : cout<<"The number is negative";
}

int main()
{
    int a;
    cout<<"Enter a numbers: ";
    cin>>a;
    check(a);
    return 0;
}