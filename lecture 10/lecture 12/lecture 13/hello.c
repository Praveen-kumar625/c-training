#include <stdio.h>

int main() {
    int arr[9] = {2, 7, 11, 15, 6, 3, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 9;
    int i, j;

    printf("Pairs with sum %d are:\n", k);
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
