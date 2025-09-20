#include <stdio.h>

int main() {
    int arr[5];
    int i;

    
    printf("Enter 5 integer elements for the array:\n");

    
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("The array elements are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
