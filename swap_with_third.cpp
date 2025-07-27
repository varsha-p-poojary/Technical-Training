#include<iostream>
using namespace std;
float  swap(int x, int y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
    return x,y;
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping \na="<<a<<"\nb="<<b<<endl;
    cout<<"After swapping = "<<swap(a,b);
    return 0;
}