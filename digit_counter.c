#include <stdio.h>
int main() {
	int numb, count = 0;
	scanf("%d", &numb);
	if (numb == 0) count = 1;
	else {
		if (numb < 0) numb = -numb;
		while (numb != 0) {
			count++;
			numb = numb / 10;
		}
	}
	printf("%d\n", count);
	return 0;
}
