 #include <stdio.h>

    int main() {
        int n, t;
        printf("Enter number: ");
        scanf("%d", &n);
        printf("Enter num (1-9): ");
        scanf("%d", &t);
        if (t < 1 || t > 9) {
            printf("Invalid num\n");
            return 0;
        }
        while (n > 9) {
            int s = 0;
            for (int x = n; x; x /= 10) s += x % 10;
            n = s;
        }
        printf("%s\n", n == t ? "Magic number" : "Not a magic number");
}

