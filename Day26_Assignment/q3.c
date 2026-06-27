#include <stdio.h>
int main()
{
    int choice;
    float balance = 5000, amount;
    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n");
    printf("Enter your choice ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        printf("Balance = %.2f", balance);
        break;
        case 2:
        printf("Enter amount");
        scanf("%f", &amount);
        balance = balance + amount;
        printf("New Balance = %2f", balance);
        break;
        case 3:
        printf("Enter amount ");
        scanf("%f", &amount);
        if (amount <= balance)
        {
            balance = balance - amount;
            printf("Remaining Balance = %.2f", balance);
        }
        else
        {
            printf("Insufficient Balance");
        }
        break;
        default;
        printf("Invalid Choice");
    }
    return 0;
}