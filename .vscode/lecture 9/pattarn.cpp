
#include <stdio.h>
int main() {
    int i, j;
    int n = 10;

    // 1
    printf("Left triangle:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    // 2
    printf("Right triangle:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    // 3 
    printf("Center pyramid:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }

    // 4
    printf("left triangle:\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    // 5.
    printf("right triangle:\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    // 6. 
    printf("pyramid:\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }

    return 0;
}
