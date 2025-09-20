#include <stdio.h> 

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[5] = {1, 2, 9, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    
    bubbleSort(a, n);
    
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}