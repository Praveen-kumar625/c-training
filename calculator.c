<<<<<<< HEAD
#include <stdio.h>
int main() {
    int a, b;
    char o;
    scanf("%d %d %c", &a, &b, &o);
    if (o == '+')
        printf("%d\n", a + b);
    else if (o == '-')
        printf("%d\n", a - b);
    else if (o == '*')
        printf("%d\n", a * b);
    else if (o == '/') {
        if (b == 0)
            printf("INF\n");
        else
            printf("%d\n", a / b);
    }
    else if (o == '%') {
        if (b == 0)
            printf("INF\n");
        else
            printf("%d\n", a % b);
    }
    else
        printf("NA\n");
    return 0;
}
=======
#include <stdio.h>
int main() {
    int a, b;
    char o;
    scanf("%d %d %c", &a, &b, &o);
    if (o == '+')
        printf("%d\n", a + b);
    else if (o == '-')
        printf("%d\n", a - b);
    else if (o == '*')
        printf("%d\n", a * b);
    else if (o == '/') {
        if (b == 0)
            printf("INF\n");
        else
            printf("%d\n", a / b);
    }
    else if (o == '%') {
        if (b == 0)
            printf("INF\n");
        else
            printf("%d\n", a % b);
    }
    else
        printf("NA\n");
    return 0;
}
>>>>>>> bcf03a6658f7c50e3b426d444b34ab3dee4bdef3
