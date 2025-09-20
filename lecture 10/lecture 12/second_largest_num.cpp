
#include <stdio.h>
#include <limits.h> 

int main() {
    int arr[5];
    int i, largest, second_largest;

    
    printf("Enter 5 integer elements for the array:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    largest = INT_MIN;
    second_largest = INT_MIN;

    
    for (i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    
    if (second_largest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}
