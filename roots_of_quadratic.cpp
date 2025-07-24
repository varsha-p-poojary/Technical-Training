#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float x1,x2;
    cout<<"Enetr 3 numbers: ";
    cin>>a>>b>>c;
    if(sqrt(pow(b,2)-4*a*c)<=0)
    {
        cout<<"Impossible to find the roots";
        return 0;
    }
    x1 = (-b+(sqrt(pow(b,2)-4*a*c)))/2*a;
    x2 = (-b-(sqrt(pow(b,2)-4*a*c)))/2*a;
    cout<<"X1 ="<<x1<<endl;
    cout<<"X2 ="<<x2<<endl;
    return 0;
}