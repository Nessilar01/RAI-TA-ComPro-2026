#include <stdio.h>

int main(void)
{
    double balance = 0.0;   // "user starts with a balance of 0" — must be
                             // double, not int, because deposits/withdrawals
                             // are shown with cents (e.g. 500.00)
    int choice;
    double amount;

    // do-while: the menu must print and the user must pick an option at
    // least once before we can check "did they choose to exit?" — classic
    // do-while use case per slide 41.
    do
    {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                balance += amount;
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > balance)
                {
                    printf("Insufficient funds.\n");
                }
                else
                {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                break;

            default:
                printf("Invalid option. Try again.\n");
                break;
        }

        printf("\n");

    }
    while (choice != 4);

    return 0;
}