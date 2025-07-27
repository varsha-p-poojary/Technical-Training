#include<iostream>
#include<time.h>
using namespace std;
int snake_ladder(int s, int c, int r)   
{
    if(s==8)
    s=s+14;
    else if(s==27)
    s=s+ 26;
    else if(s==42)
    s=s+ 26;
    else if(s==61)
    s=s+ 30;
    else if(s==75)
    s=s+ 20;
    else if(s==97)
    s=s- 80;
    else if(s==93)
    s=s- 60;
    else if(s==74)
    s=s- 34;
    else if(s==56)
    s=s- 30;
    else if(s==23)
    s=s- 16;
    else if(s==100)
    {
    cout<<"Score = "<<s<<endl;
    cout<<"Player "<<c<<" Is the Winner"<<endl;
    return 0;
    }
    else if(s>100)
    s=s-r;
    return s;
}
int main()
{
int p1=0, p2=0, p,r;
while(1)
{
cout<<endl<<"Enter the player number: ";
cin>>p;
srand(time(0));
r = (rand()%10)+1;
if(r>6)
r=r-3;
if(p==1)
{
    cout<<"Dice = "<<r<<endl;
    p1=p1+r;
    p1 = snake_ladder(p1, p,r);
    if(p1==100)
    break;
    cout<<"Score = "<<p1;
}
if(p==2)
{
    cout<<"Dice = "<<r<<endl;
    p2=p2+r;
    p2 = snake_ladder(p2, p,r);
    if(p2==100)
    break;
    cout<<"Score = "<<p2;
}
}
return 0;
}









