#include <stdio.h>

int main() {
    int choice;
    float amount, converted;
    printf(" Currency Converter\n");
    printf("1. USD to INR\n");
    printf("2. INR to USD\n");
    printf("3. USD to EUR\n");
    printf("4. EUR to USD\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter amount: ");
    scanf("%f", &amount);

    switch(choice) {
        case 1:
            converted = amount * 87.0; 
            printf("%.2f USD = %.2f INR\n", amount, converted);
            break;
        case 2:
            converted = amount / 87.0; 
            printf("%.2f INR = %.2f USD\n", amount, converted);
            break;
        case 3:
            converted = amount * 0.92;
            printf("%.2f USD = %.2f EUR\n", amount, converted);
            break;
        case 4:
            converted = amount / 0.92; 
            printf("%.2f EUR = %.2f USD\n", amount, converted);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}