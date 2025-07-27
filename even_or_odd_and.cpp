#include<iostream>
using namespace std;
void  check(int x)
{
    if(x&1==1)
    cout<<"The number is odd";
    else
    cout<<"The number is even";
}
int main()
{
    int a;
    cout<<"Enter the a numbers: ";
    cin>>a;
    check(a);
    return 0;
}