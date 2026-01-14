#include <stdio.h>

int main() {

    int radius;
    int a, b;
    int count = 0;

    printf("Enter the radius of the circle : ");
    scanf("%d", &radius);

    for (a = -(radius); a <= radius; a++) {
        for (b = -(radius); b <= radius; b++) {

            if (a * a + b * b <= radius * radius) {
                count++;
            }
        }
    }

    printf("Number of integer points inside the circle is = %d\n", count);

    return 0;
}
