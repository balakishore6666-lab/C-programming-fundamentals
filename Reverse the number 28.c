#include <stdio.h>

int main() {
    int n, rev = 0;

    scanf("%d", &n);

    int sign = 1;
    if (n < 0) {
        sign = -1;
        n = -n;
    }

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    rev = rev * sign;

    printf("%d", rev);

    return 0;
}
