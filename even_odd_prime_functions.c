#include <stdio.h>
#include <stdbool.h>

// Returns true if the number is even
bool is_even(int number) {
    return (number % 2) == 0;
}

// Returns true if the number is prime
bool is_prime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true; // 2 and 3 are prime
    }
    if ((number % 2) == 0) {
        return false; // even numbers greater than 2 are not prime
    }

    // Check odd divisors up to sqrt(number)
    for (int divisor = 3; (long long)divisor * (long long)divisor <= number; divisor += 2) {
        if ((number % divisor) == 0) {
            return false;
        }
    }
    return true;
}

void check_even_odd(void) {
    int number;
    printf("Enter an integer to check even/odd: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return;
    }
    if (is_even(number)) {
        printf("%d is Even.\n", number);
    } else {
        printf("%d is Odd.\n", number);
    }
}

void check_prime_number(void) {
    int number;
    printf("Enter an integer to check prime: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return;
    }
    if (is_prime(number)) {
        printf("%d is a Prime number.\n", number);
    } else {
        printf("%d is NOT a Prime number.\n", number);
    }
}

int main(void) {
    int choice;
    while (1) {
        printf("\n==== Number Checker (Functions Demo) ====\n");
        printf("1. Check Even/Odd\n");
        printf("2. Check Prime\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                check_even_odd();
                break;
            case 2:
                check_prime_number();
                break;
            case 3:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Please enter a valid option (1-3).\n");
        }
    }
    return 0;
}


