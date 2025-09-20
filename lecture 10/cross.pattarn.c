#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the cross: ");
    scanf("%d", &size);
    
    if (size % 2==0) {
        printf("Please enter an number\n");
        return 1;
    }
    
    for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++)
         {
            
            if (i==j||i+j==size-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}