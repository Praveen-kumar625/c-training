
#include <stdio.h>
int main() {
	int n, i, is_prime = 1;
	scanf("%d", &n);
	if (n <= 1) is_prime = 0;
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}
	if (is_prime)
		printf("Prime\n");
	else
		printf("Not Prime\n");
	return 0;
}
