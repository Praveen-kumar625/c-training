

#include <stdio.h>
int main() {
	int num, fact = 1, i = 1;
	scanf("%d", &num);
	while (i <= num) {
		fact = fact * i;
		i++;
	}
	printf("%d\n", fact);
	return 0;
}
