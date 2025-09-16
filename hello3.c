#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

   
    int first_element = arr[0];

    
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

   
    arr[n - 1] = first_element;

    
    printf("The shifted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}