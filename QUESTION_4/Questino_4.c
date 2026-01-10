#include <stdio.h>

int main() {

    int age;
    char india;
    char record;
    float value;
    float premium = 0;
    int excess = 0;

    printf("Enter age of driver: ");
    scanf("%d", &age);

    printf("Is the car manufactured in India? (y/n): ");
    scanf(" %c", &india);

    printf("Has the car been involved in an accident? (y/n): ");
    scanf(" %c", &record);

    printf("Enter MRP of car: ");
    scanf("%f", &value);

    printf("\nInsurance Result:\n");

    if (age >= 25) {

        if (india == 'y') {

            if (record == 'y') {
                premium = value * 6 / 100;
                printf("Policy Type: Comprehensive\n");
            } 
            else {
                premium = value * 7 / 100;
                excess = 100;
                printf("Policy Type: Comprehensive\n");
            }
        }
        else {

            if (record == 'y') {
                premium = value * 6 / 100;
                excess = 100;
                printf("Policy Type: Comprehensive\n");
            } 
            else {
                premium = value * 7 / 100;
                printf("Policy Type: Third Party\n");
            }
        }
    }
    else {

        if (india == 'y') {

            if (record == 'y') {
                premium = value * 6 / 100;
                excess = 100;
                printf("Policy Type: Comprehensive\n");
            } 
            else {
                printf("No policy can be issued.\n");
                return 0;
            }
        }
        else {

            if (record == 'y') {
                premium = value * 8 / 100;
                excess = 100;
                printf("Policy Type: Comprehensive\n");
            } 
            else {
                printf("No policy can be issued.\n");
                return 0;
            }
        }
    }

    printf("Premium Amount = Rs %.2f\n", premium);

    if (excess == 100)
        printf("Excess Payable = Rs 100\n");
    else
        printf("Excess Payable = Nil\n");

    return 0;
}
