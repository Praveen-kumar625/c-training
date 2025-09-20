#include <stdio.h> //ws - window sum
int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int ms = 0, ws = 0, start = 0;

    for (int i = 0; i < k; i++)
        ws += arr[i];
    ms = ws;                   // ms - max sum

    for (int i = k; i < n; i++) {
        ws += arr[i] - arr[i - k];
        if (ws > ms) {
            ms = ws;
            start = i - k + 1;
        }
    }

    printf("Maximum Sum: %d\n", ms);
    printf("Subarray: ");
    for (int i = start; i < start + k; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
