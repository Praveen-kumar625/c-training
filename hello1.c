#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
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
