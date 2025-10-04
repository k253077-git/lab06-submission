#include <stdio.h>

int main() {
    int amount;
    int c25 = 0, c10 = 0, c5 = 0, c1 = 0;

    printf("Enter the amount in cents: ");
    scanf("%d", &amount);

    while (amount > 0) {
        if (amount >= 25) {
            amount -= 25;
            c25++;
        }
        else if (amount >= 10) {
            amount -= 10;
            c10++;
        }
        else if (amount >= 5) {
            amount -= 5;
            c5++;
        }
        else {
            amount -= 1;
            c1++;
        }
    }

    printf("Coins needed:\n");
    printf("25 cents: %d\n", c25);
    printf("10 cents: %d\n", c10);
    printf("5 cents: %d\n", c5);
    printf("1 cent: %d\n", c1);

    return 0;
}

