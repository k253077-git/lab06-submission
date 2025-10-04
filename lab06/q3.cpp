#include <stdio.h>

int main() {
    int amount = 50000; 
    int withdraw;

    printf("Bank Balance = %d\n\n", amount);

    while (amount > 0) {
        printf("Enter your withdraw amount: ");
        scanf("%d", &withdraw);

        if (withdraw > amount) {
            printf("Insufficient balance! You only have %d left.\n\n", amount);
        }
        else {
            amount -= withdraw;
            printf("You withdraw: %d\n", withdraw);
            printf("Your remaining balance is: %d\n\n", amount);
        }
    }

    printf("Your balance is now 0. Thank you!\n");

    return 0;
}

