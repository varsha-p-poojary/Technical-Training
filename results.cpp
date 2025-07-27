#include<iostream>
using namespace std;
bool  check(float m1, float m2, float m3)
{
    if(m1>35)
    {
        if(m2>35)
    {
        if(m3>35)
        return true;
        else
        return false;
    }
    else 
    return false;
    }
    else
    return false;
}
int main()
{
    float m1, m2, m3;
    cout<<"Enter the marks: ";
    cin>>m1>>m2>>m3;
    if(check(m1,m2,m3)==1)
    cout<<"Pass";
    else
    cout<<"Fail";
    return 0;
}