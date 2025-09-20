#include <stdio.h>

int main()
{
    int n = 5;
    printf("Enter the size of square:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Loop
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf(" P ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
