#include<iostream>
#include<math.h>
using namespace std;
int check(char a, int miss)
{
    if(!(isdigit(a)||isalpha(a)||isspace(a)))
    miss=miss+1;
    return miss;

}
int main()
{
    int miss=0;
    char x[100],i;
    cout<<"Enter the string: ";
    gets(x);
    for(i=0;x[i]!='\0';i++)
    miss= check(x[i],miss);
    cout<<"The number of misses = "<<miss;
    return 0;
}