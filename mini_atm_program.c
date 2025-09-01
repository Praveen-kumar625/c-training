#include <stdio.h>
#include <stdlib.h>
int main() {
	int pin = 1234, enteredPin, option;
	float balance = 1000.0, amount;
	int attempts = 0, max_attempts = 3;

	printf("\n==== Welcome to Mini ATM ====");

	// PIN authentication
	while (attempts < max_attempts) {
		printf("\nEnter your PIN: ");
		scanf("%d", &enteredPin);
		if (enteredPin == pin) {
			break;
		} else {
			printf("Incorrect PIN. Try again.\n");
			attempts++;
		}
	}
	if (attempts == max_attempts) {
		printf("\nToo many incorrect attempts. Exiting.\n");
		return 1;
	}

	do {
		printf("\n\n==== ATM Menu ====");
		printf("\n1. Check Balance");
		printf("\n2. Deposit");
		printf("\n3. Withdraw");
		printf("\n4. Exit");
		printf("\nSelect an option: ");
		scanf("%d", &option);

		switch(option) {
			case 1:
				printf("\nYour current balance is: Rs. %.2f\n", balance);
				break;
			case 2:
				printf("\nEnter amount to deposit: Rs. ");
				scanf("%f", &amount);
				if (amount > 0) {
					balance += amount;
					printf("\nDeposited successfully. New balance: Rs. %.2f\n", balance);
				} else {
					printf("\nInvalid amount.\n");
				}
				break;
			case 3:
				printf("\nEnter amount to withdraw: Rs. ");
				scanf("%f", &amount);
				if (amount > 0 && amount <= balance) {
					balance -= amount;
					printf("\nWithdrawal successful. New balance: Rs. %.2f\n", balance);
				} else {
					printf("\nInsufficient balance or invalid amount.\n");
				}
				break;
			case 4:
				printf("\nThank you for using Mini ATM. Goodbye!\n");
				break;
			default:
				printf("\nInvalid option. Please try again.\n");
		}
	} while(option != 4);

	return 0;
}
