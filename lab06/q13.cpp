#include <stdio.h>

int main() {
    int num, i = 0, org;

    printf("Enter a number: ");
    scanf("%d", &num);

    org = num;

    while (num > 0) {
        if (num & 1) {
            i++;
        }
        num = num >> 1; 
    }

    printf("The number %d has %d 1s.\n", org, i);

}

