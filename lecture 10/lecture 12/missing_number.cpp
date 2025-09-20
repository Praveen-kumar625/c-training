
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    int i;
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    int missing_number;

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        actual_sum += arr[i];
    }

    missing_number = expected_sum - actual_sum;

    printf("The missing number is: %d\n", missing_number);

    return 0;
}
