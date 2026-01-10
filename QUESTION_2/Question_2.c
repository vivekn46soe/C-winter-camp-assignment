#include <stdio.h>

int main() {
    int i, j, x;

    printf("Enter value of i: ");
    scanf("%d", &i);

    printf("Enter value of j: ");
    scanf("%d", &j);

    if (i % j == 0)
        x = i;
    else
        x = i + (j - i % j);

    printf("Rounded value = %d\n", x);

    return 0;
}
