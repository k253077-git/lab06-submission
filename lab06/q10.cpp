#include <stdio.h>
#include <math.h>

int main() {
    double A, P, r;
    int n, t;

    printf("Enter the principal amount: ");
    scanf("%lf", &P);

    printf("Enter the time in years: ");
    scanf("%d", &t);

    printf("Enter how many times interest is compounded per year: ");
    scanf("%d", &n);

    printf("Enter the annual interest rate in decimal: ");
    scanf("%lf", &r);

    if (P > 0) {
        A = P * pow((1 + r / n), n * t);
        printf("The total value of the investment is: %.2f\n", A);
    } else {
        printf("amount always in positive.");
    }

    return 0;
}

