#include <stdio.h>

int main()
 {
    int n=5;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j <=i;j++) {
            printf(" p ");
        }
        printf("\n");
    for(int i=n-1;i>=1;i--)
     {
        for(int j= 1;j<=i;j++)
        {
            printf("p ");
        }
        printf("\n");
    }

    return 0;
}
