#include<iostream>
using namespace std;
void  swap(int x, int y)
{
    cout<<"Before swapping \na="<<x<<"\nb="<<y<<endl;
    cout<<"After Swapping"<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"a="<<x<<endl<<"b="<<y;
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    swap(a,b);
    return 0;
}