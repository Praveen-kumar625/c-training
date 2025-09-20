#include <stdio.h>
void mss(int arr[], int n) { // mss for maxSubArraySum
    if (n <= 0) {
        printf("Array is empty.\n");
        return;
    }
    int ms = arr[0], me = arr[0]; // ms: max_sum, me: max_end
    int start = 0, end = 0, s = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > me + arr[i]) {
            me = arr[i];
            s = i;
        } else {
            me += arr[i];
        }

        if (me > ms) {
            ms = me;
            start = s;
            end = i;
        }
    }

    printf("Max Sum: %d\n", ms);
    printf("Subarray size: %d\n", end - start + 1);
    printf("Subarray: ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() {
    int arr[] = { 5, 4, -1, 7, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    mss(arr, n);
}
