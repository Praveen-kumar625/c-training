#include<stdio.h>
int main() 
{
    int n=0;
    scanf("%d", &n);
    n == 0 ? printf("Zero\n") : (n % 2 == 0 ? printf("Even\n") : printf("Odd\n"));
    return 0;
}