#include <stdio.h>
int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k_even = 2, k_odd = 3;
    int max_even = 0, max_odd = 0, sum = 0;

    for (int i = 0; i < k_even; i++)
        sum += arr[i];
    max_even = sum;
    for (int i = k_even; i < n; i++) {
        sum += arr[i] - arr[i - k_even];
        if (sum > max_even)
            max_even = sum;
    }

    sum = 0;
    for (int i = 0; i < k_odd; i++)
        sum += arr[i];
    max_odd = sum;
    for (int i = k_odd; i < n; i++) {
        sum += arr[i] - arr[i - k_odd];
        if (sum > max_odd)
            max_odd = sum;
    }
    printf("Max even ws: %d\n", max_even); //ms - window sum
    printf("Max odd ws: %d\n", max_odd);
    return 0;
}
