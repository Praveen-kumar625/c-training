#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int i = 0;
    int j = n - 1;
    int is_palindrome = 1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
