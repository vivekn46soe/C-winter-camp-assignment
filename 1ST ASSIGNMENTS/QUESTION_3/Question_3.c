#include <stdio.h>

int main() {
    float f, c;

    printf("Enter temperature of city in Fahrenheit: ");
    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("Temperature of city in entigrade = %.2f\n", c);

    return 0;
}
