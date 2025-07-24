#include<iostream>
using namespace std;
int  area_of_square(int x)
{
    int area;
    area = x*x;
    return area;
}
int main()
{
    int a, area;
    cout<<"Enter the side of the square: ";
    cin>>a;
    area = area_of_square(a);
    cout<<"Area of square is = "<<area;
    return 0;
}