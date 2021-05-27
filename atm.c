#include <stdio.h>
int main(int argc, char const *argv[])
{
    int balance = 10000, withdraw, deposit;
    int choice;
    do
    {
        printf("\nEnter your choice:");
        printf("\n1-Withdraw\n2-Deposit\n3-Check Balance\n4-Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the amount to be withdrawn:\n");
            scanf("%d", &withdraw);
            if (withdraw % 100 != 0)
			{
				printf("\n Please enter the amount in multiples of 100\n");
                break;
			}
            else if (withdraw > balance)
            {
                printf("Insufficient Balance\n");
                break;
            }
            else
                balance = balance - withdraw;
            printf("you have succesfully withdrawn %d your remaining balance is %d\n", withdraw, balance);
            break;

        case 2:
            printf("Enter the amount to be deposited:\n");
            scanf("%d", &deposit);
            balance = balance + deposit;
            printf("you have succesfully deposited %d your remaining balance is %d\n", deposit, balance);
            break;

        case 3:
            printf("your balance is %d\n", balance);
            break;

        case 4:
            break;

        default:
            printf("Invalid Input\n");
            break;
        }

    } while (choice != 4);

    return 0;
}
