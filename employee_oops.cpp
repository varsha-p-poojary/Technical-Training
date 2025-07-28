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
        cin>>n;
        cout<<"Enter the Salary: ";
        cin>>s;
        cout<<"Enter the experience: ";
        cin>>e;
        cout<<"Enter the department: ";
        cin>>dep;
        cout<<"Enter the designation: ";
        cin>>d;
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
    Employee emp;
    emp.input();
    emp.display();
    return 0;
}