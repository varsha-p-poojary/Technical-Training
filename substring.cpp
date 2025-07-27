#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s, s1;
    int len, i,j;
    cout<<"Enter a string: ";
    std::getline(std::cin,s);
    for(i=0)
    for(i=0;i<len;i++)
    {
        for(j=1;j<=len;j++)
        s1=s.substr(i,j);
        cout<<s1<<endl;
    }
    return 0;
}