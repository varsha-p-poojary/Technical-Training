#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char n[100],d[100],dep[100];
    float s, e;
    void input()
    {
        cout<<"Enter the id: ";
        cin>>id;
        cin.ignore();
        cout<<"Enter the name: ";
        gets(n);
        cout<<"Enter the Salary: ";
        cin>>s;
        cout<<"Enter the experience: ";
        cin>>e;
        cin.ignore();
        cout<<"Enter the department: ";
        gets(dep);
        cout<<"Enter the designation: ";
        gets(d);
    }
    void display()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<n<<endl;
        cout<<"Salary : "<<s<<endl;
        cout<<"Experience : "<<e<<endl;
        cout<<"Department : "<<dep<<endl;
        cout<<"Designation : "<<d<<endl;
    }
};

int main()
{
    Employee emp[5];
    int i,x,flag=0;
    for(i=0;i<5;i++)
    {
        cout<<"Enter the date of employee "<<i+1<<endl;
        emp[i].input();
    }
    cout<<"Enter the ID of an employee: ";
    cin>>x;
    for(i=0;i<5;i++)
    {
        flag=1;
        if(emp[i].id==x)
        {
        cout<<"Tthe date of employee "<<i+1<<" is"<<endl;
        emp[i].display();
        }
    }
    if(flag==0)
    cout<<"Invalid data";
    return 0;
}