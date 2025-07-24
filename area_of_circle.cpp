#include<iostream>
using namespace std;
float  area_of_circle(float x)
{
    float area;
    area = 3.15*x*x;
    return area;
}
int main()
{
    float a, area;
    cout<<"Enter the radius of the circle: ";
    cin>>a;
    area = area_of_circle(a);
    cout<<"Area of circle is = "<<area;
    return 0;
}