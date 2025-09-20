#include <stdio.h>
int main() {
	int i, j,n=10;
	
	for (i=1;i<=n;i++) 
    {
		for (j=1;j<=i;j++) 
        printf("P");
		for (j=1;j<=2*(n-i);j++)
         printf(" ");
		for (j=1;j<=i;j++) 
        printf("P");
		printf("\n");
	}
	
	for (i=n;i>=1;i--) 
    {
		for (j=1;j<=i;j++) 
        printf("P");
		for (j=1; j<=2*(n-i);j++)
         printf(" ");
		for (j=1;j<=i;j++)
         printf("P");
		printf("\n");
	}
	return 0;
}
