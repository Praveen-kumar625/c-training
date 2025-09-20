<<<<<<< HEAD
#include <stdio.h>
int main() {
	int num, prod = 1;
	scanf("%d", &num);
	if (num == 0) prod = 0;
	else {
		if (num < 0) num = -num;
		while (num != 0) {
			prod = prod * (num % 10);
			num = num / 10;
		}
	}
	printf("%d\n", prod);
	return 0;
}
=======
#include <stdio.h>
int main() {
	int num, prod = 1;
	scanf("%d", &num);
	if (num == 0) prod = 0;
	else {
		if (num < 0) num = -num;
		while (num != 0) {
			prod = prod * (num % 10);
			num = num / 10;
		}
	}
	printf("%d\n", prod);
	return 0;
}
>>>>>>> bcf03a6658f7c50e3b426d444b34ab3dee4bdef3
