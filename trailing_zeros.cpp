#include<iostream>
using namespace std;
int factorial(int n, int s)
{
    if(n==0)
    return s;
    else{
    
        s=s*n;
        factorial(n-1,s);
    }
}
int countTrailingZeros(int x)
{
    int fact = 1,r,count =0;
    fact = factorial(x,fact);
    while(fact>0)
    {
        r=fact%10;
        if(r==0)
        {
        count++;
        fact=fact/10;
        }
        else
        break;
    }
    cout<<"The number of trailing zeroes is = "<<count;

}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    countTrailingZeros(num);
    return 0;
}