#include <stdio.h>

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int ms = arr[0]; // ms - max sum
    int start = 0, khatam = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum > ms) {
                ms = sum;
                start = i;
                khatam = j;
            }
        }
    }

    printf("Max Subarr Sum: %d\n", ms);
    printf("Subarr Size: %d\n", khatam - start + 1);
    printf("Subarr Elements: ");
    for (int i = start; i <= khatam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
