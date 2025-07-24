#include<iostream>
#include<math.h>
using namespace std;
float  solve(int x, int y)
{
    float z;
    z=(log10(exp(x))+log(sqrt(y)))/(sin(x)+exp(y)+pow(x,y));
    return z;
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"The answer of the expression is "<<solve(a,b);
    return 0;
}