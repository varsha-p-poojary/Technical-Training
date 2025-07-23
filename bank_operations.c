#include<stdio.h>
int main()
{
    float balance = 1000, amt;
    int pin = 1234, n, user_pin, new_pin, confirm_pin;
    printf("Choose any of the following option\n1. Deposit\n2. Withdrawal\n3. Balance enquiry\n4. PIN change\nEnter you option: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter your PIN: ");
        scanf("%d",&user_pin);
        if(user_pin==pin)
        {
            printf("Enter the amount you want to deposit: ");
            scanf("%f",&amt);
            balance = balance+amt;
            printf("Your current bank balance is %f",balance);
        }
        else
        printf("Invalid PIN entered");
        break;

        case 2:
        printf("Enter your PIN: ");
        scanf("%d",&user_pin);
        if(user_pin==pin)
        {
            printf("Enter the amount you want to withdraw: ");
            scanf("%f",&amt);
            if(amt>balance)
            printf("Insufficient balance");
            else
            {
                balance = balance - amt;
                printf("%f have been withdrawn.Your current bank balance is %f",amt, balance);
            }
        }
        else
        printf("Invalid PIN entered");
        break;

        case 3:
        printf("Enter your PIN: ");
        scanf("%d",&user_pin);
        if(user_pin==pin)
        {
            printf("Your current bank balance is %f",balance);
        }
        else
        printf("Invalid PIN entered");
        break;

        case 4:
        printf("Enter your PIN: ");
        scanf("%d",&user_pin);
        if(user_pin==pin)
        {
            printf("Enter the 4 digit new PIN: ");
            scanf("%d",&new_pin);
            printf("Re-enter the 4 digit PIN: ");
            scanf("%d",&confirm_pin);
            if(confirm_pin==new_pin)
            {
                pin = confirm_pin;
                printf("PIN updated succesfully\nYour new PIN is %d",pin);
            }
            else
            printf("PIN not matched");
        }
        else
        printf("Invalid PIN entered.Please retry");
        break;

        default:
        printf("Invalid option");
        break;
}
}
