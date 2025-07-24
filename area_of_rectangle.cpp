#include<iostream>
using namespace std;
int  area_of_rectangle(int x, int y)
{
    int area;
    area = x*y;
    return area;
}
int main()
{
    int a,b, area;
    cout<<"Enter the length and breadth of the rectangle: ";
    cin>>a>>b;
    area =area_of_rectangle(a,b);
    cout<<"Area of rectangle is = "<<area;
    return 0;
}