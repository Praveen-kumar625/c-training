#include <stdio.h>

int main() {
	char numbers;
	double num1, num2, result;

	printf("Enter an number (+, -, *, /): ");
	scanf(" %c", &numbers);
	printf("Enter two numbers: ");
	scanf("%lf %lf", &num1, &num2);

	switch (numbers) {
		case '+':
			result = num1 + num2;
			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
			break;
		case '*':
			result = num1 * num2;
			printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
			break;
		case '/':
			if (num2 != 0)
				result = num1 / num2;
			else {
				printf("Error! Division by zero.\n");
				return 1;
			}
			printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
			break;
		default:
			printf("Error! Operator is not correct\n");
	}

	return 0;
}