#include <stdio.h>
#include <math.h>

int main() {
    double M, i, s;
    
    printf("Enter the intensity of earthquake (I): ");
    scanf("%lf", &i);
    
    printf("Enter the standard reference value (S): ");
    scanf("%lf", &s);
    
    if (i > 0 && s > 0) {
        M = log10(i / s);
        printf("The magnitude of earthquake is: %.1f\n", M);
    } else {
        printf("Error: Intensity  and reference must be positive values.\n");
    }
    
    return 0;
}

