#include <stdio.h>
#include <stdlib.h>

float balance = 1000.0; // Initial balance

void checkBalance() {
    printf("\nYour current balance is: ₹%.2f\n", balance);
}

void deposit() {
    float amount;
    printf("\nEnter the amount to deposit: ₹");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Please try again.\n");
        return;
    }

    balance += amount;
    printf("₹%.2f has been deposited successfully!\n", amount);
    checkBalance();
}

void withdraw() {
    float amount;
    printf("\nEnter the amount to withdraw: ₹");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Please try again.\n");
        return;
    }

    if (amount > balance) {
        printf("Insufficient funds! Your current balance is ₹%.2f\n", balance);
        return;
    }

    balance -= amount;
    printf("₹%.2f has been withdrawn successfully!\n", amount);
    checkBalance();
}

int main() {
    int choice;

    printf("=== Welcome to Simple Bank System ===\n");

    do {
        printf("\nSelect an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("\nThank you for using the bank system! Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
