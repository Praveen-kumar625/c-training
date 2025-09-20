#include <stdio.h>
void maxSubArraySum(int arr[], int n) {
    if (n <= 0) {
        printf("Array is empty.\n");
        return;
    }
    int max_sum = arr[0], max_end = arr[0];
    int start = 0, end = 0, s = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_end + arr[i]) {
            max_end = arr[i];
            s = i;
        } else {
            max_end += arr[i];
        }

        if (max_end > max_sum) {
            max_sum = max_end;
            start = s;
            end = i;
        }
    }

    printf("Max Sum: %d\n", max_sum);
    printf("Subarray size: %d\n", end - start + 1);
    printf("Subarray: ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    maxSubArraySum(arr, n);
    return 0;
}
