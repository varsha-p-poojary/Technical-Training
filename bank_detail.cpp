#include<iostream>
using namespace std;
void withdrawal(float balance)
{
    float amt;
    cout<<"Enter the amount you want to withdraw: ";
    cin>>amt;
    if(amt>balance)
    cout<<"Insufficient balance";
    else
        {
            balance = balance - amt;
            cout<<amt<<" has been withdrawn.Your current bank balance is "<<balance;
        }
}
void deposit(float balance)
{
    float amt;
    cout<<"Enter the amount you want to deposit: ";
    cin>>amt;
    balance = balance+amt;
    cout<<"Your current bank balance is "<<balance;
}
void balance_enq(float balance)
{
    cout<<"Your current bank balance is "<<balance;
}
void pin_change(int pin)
{
    int n_pin, re_pin;
    cout<<"Enter the 4 digit new PIN: ";
    cin>>n_pin;
    cout<<"Re-enter the 4 digit PIN: ";
    cin>>re_pin;
    if(n_pin==re_pin)
    {
        pin = n_pin;
        cout<<"PIN updated";
    }
    else
    cout<<"Retry";
}
int main()
{
    int pin = 1234, user_pin, n;
    float balance = 2000;
    cout<<"Enter your PIN: ";
    cin>>user_pin;
    if(user_pin==pin)
    {
    cout<<"Choose any of the following option\n1. Deposit\n2. Withdrawal\n3. Balance enquiry\n4. PIN change\nEnter you option: ";
    cin>>n;
    if(n==1)
    deposit(balance);
    else if(n==2)
    withdrawal(balance);
    else if(n==3)
    balance_enq(balance);
    else
    pin_change(pin);
    }
    else
    printf("Invalid PIN entered");
    return 0;
}
        

