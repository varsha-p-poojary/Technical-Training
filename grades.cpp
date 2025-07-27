#include<iostream>
using namespace std;
void grades(float m, float p,float c)
{
    float avg;
    avg = (m+p+c)/3;
    if(avg>90)
    cout<<"Grade=A+";
    else if(avg>80)
    cout<<"Grade=A";
    else if(avg>70)
    cout<<"Grade=B+";
    else if(avg>60)
    cout<<"Grade=B";
    else if(avg>50)
    cout<<"Grade=C";
    else if(avg>40)
    cout<<"Grade=D";
    else if(avg>35)
    cout<<"Grade=E";
    else 
    cout<<"Grade=F";
}

int main()
{
    float m,p,c;
    cout<<"Enter the marks in 3 subjects\n";
    cin>>m>>p>>c;
    grades(m,p,c);
    return 0;
}
