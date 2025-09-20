#include <stdio.h>
int main() {
	int i, j, prime;
	for (i = 2; i <= 100; i++) {
		prime = 1;
		for (j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
		}
		if (prime)
			printf("%d\n", i);
	}
	return 0;
}

/* #include <stdio.h>
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
} 8
*/
