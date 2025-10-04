#include <stdio.h>

int main() {
    int n;
    long fact = 1;  

    printf("Enter number of participants: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Total arrangements = %d! = %ld\n", n, fact);
    }

    return 0;
}

