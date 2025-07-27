#include<iostream>
using namespace std;
void vowel(char a)
{
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
        cout<<"The given letter is a Vowel";
    else 
       cout<<"The given letter is not a Vowel";
}
int main()
{
    char x;
    cout<<"Enter a letter: ";
    cin>>x;
    vowel(x);
    return 0;
}