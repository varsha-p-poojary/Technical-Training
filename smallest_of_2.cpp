#include<iostream>
using namespace std;
int  check(int x, int y)
{
    (x>y)? cout<<y<<" is smaller": cout<<x<<" is smaller";
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    check(a,b);
    return 0;
}