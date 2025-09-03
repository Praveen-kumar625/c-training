
#include <stdio.h>
int main() {
	int n, f = 1, i = 1;
	scanf("%d", &n);
	while (i <= n) {
		f = f * i;
		i++;
	}
	printf("%d\n", f);
	return 0;
}
