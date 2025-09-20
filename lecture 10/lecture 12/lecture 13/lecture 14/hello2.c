#include <stdio.h>


void P(int arr[], int n) // MAX SUBARRAY SUM = P
 {
    int H = arr[0], KHALLAS = arr[0]; //KHALLAS = MAX END OF ARRAY
    int start = 0, end = 0, s = 0; //H= MAX SO FAR

    for (int i = 1; i < n; i++) {
        if (arr[i] > KHALLAS + arr[i]) {
            KHALLAS = arr[i];
            s = i;
        } else {
            KHALLAS += arr[i];
        }

        if (KHALLAS > H) {
            H = KHALLAS;
            start = s;
            end = i;
        }
    }

    printf("Maximum Sum: %d\n", H);
    printf("Subarray size: %d\n", end - start + 1);
    printf("Subarray: ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 1,2,4,5,6,7,8,9, };
    int n = sizeof(arr) / sizeof(arr[0]);
    P(arr, n);
    return 0;
}
