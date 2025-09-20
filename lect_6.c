<<<<<<< HEAD
#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("%d\n", sum);
    return 0;
}
=======
#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("%d\n", sum);
    return 0;
}
>>>>>>> bcf03a6658f7c50e3b426d444b34ab3dee4bdef3
