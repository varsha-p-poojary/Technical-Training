#include<iostream>
#include<time.h>
using namespace std;
int  random()
{
int x;
    srand(time(0));
    x=(rand()%10000)+1;
    return x;
}
int main()
{
    cout<<"The four digit random number is "<<random();
    return 0;
}
    