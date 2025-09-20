
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int search_element;
    int found = 0; 
    int i;

    printf("Enter an element to search for: ");
    scanf("%d", &search_element);

    
    for (i = 0; i < 5; i++) {
        if (arr[i] == search_element) {
            found = 1; 
            break;     
        }
    }

    
    printf("Is the element in the array? ");
    if (found) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
