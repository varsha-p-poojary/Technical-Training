#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:
    int ht,m1,m2,m3;
    char n[100];
    void input()
    {
        cout<<"Enter the hall ticket number: ";
        cin>>ht;
        cin.ignore();
        cout<<"Enter the name: ";
        gets(n);
        cout<<"Enter the marks in Maths: ";
        cin>>m1;
        cout<<"Enter the marks in Chemistry: ";
        cin>>m2;
        cout<<"Enter the marks in Physics:  ";
        cin>>m3;
    }
    void display()
    {
        cout<<"Hall ticket number : "<<ht<<endl;
        cout<<"Name : "<<n<<endl;
        cout<<"Maths : "<<m1<<endl;
        cout<<"Chemistry : "<<m2<<endl;
        cout<<"Physica : "<<m3<<endl;
    }
    bool pass_fail()
    {
        if(m1>35)
        {
            if(m2>35)
            {
                if(m3>35)
                return 1;
            }
        }
        else 
        return 0;
    }
    float total()
    {
        float ttl;
        ttl = m1+m2+m3;
        return ttl;
    }
    float average(float x)
    {
        float avg;
        avg= x/3;
        return avg;
    }
    void grades(float avg)
    {
            cout<<"Student passed "<<endl;
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
    }

};

int main()
{
    int n,b;
    cout<<"Enter the number of students";
    cin>>n;
    Student std[n];
    int i,x,flag=0;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the date of student "<<i+1<<endl;
        std[i].input();
    }
    cout<<"Enter the hall ticket of a student: ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        flag=1;
        if(std[i].ht==x)
        {
        cout<<"The date of the student "<<i+1<<" is"<<endl;
        b = std[i].pass_fail();
        if(b==0)
        cout<<"Student failed"<<endl;
        else
        {
        std[i].display();
        cout<<"Total= "<<std[i].total()<<endl;
        cout<<"Average= "<<std[i].average(std[i].total())<<endl;
        std[i].grades(std[i].average(std[i].total()));
        }
    }
    }
    if(flag==0)
    cout<<"Invalid data";
    return 0;
}