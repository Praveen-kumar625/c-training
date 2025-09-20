<<<<<<< HEAD


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
=======

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
>>>>>>> bcf03a6658f7c50e3b426d444b34ab3dee4bdef3
