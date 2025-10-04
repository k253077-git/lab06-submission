#include <stdio.h>
#include <math.h>

int main() {
    double h, l, ang, rad;

    printf("Enter the height of the building: ");
    scanf("%lf", &h);

    printf("Enter the angle of elevation in degrees: ");
    scanf("%lf", &ang);

    if (h > 0 && ang > 0 && ang < 90) {
        rad = ang * M_PI / 180.0;  
        l = h / tan(rad);

        printf("The base length from the building is: %.2lf\n", l);
    }
}

