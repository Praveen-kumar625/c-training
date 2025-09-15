#include <stdio.h>

int main() {
    int arr[5];
    int i;
    int sum = 0;

    
    printf("Enter 5 integer elements for the array:\n");

    
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
