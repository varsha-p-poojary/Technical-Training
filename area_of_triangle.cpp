#include<iostream>
using namespace std;
float  area_of_triangle(float x, float y)
{
    float area;
    area = 0.5*x*y;
    return area;
}
int main()
{
    float a, b, area;
    cout<<"Enter the base and height of the triangle: ";
    cin>>a>>b;
    area = area_of_triangle(a,b);
    cout<<"Area of circle is = "<<area;
    return 0;
}