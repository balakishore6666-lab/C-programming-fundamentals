#include <stdio.h>

int main() {
    int n;
    int max = 0;
    int min = 9;
    scanf("%d", &n);
     if (n<0) {
        n = -n;
    }

    if (n==0) {
        printf("0 0");
        return 0;
    }

    while (n>0) {
        int digit=n%10;   

        if (digit>max) {
            max=digit;
        }

        if (digit<min) {
            min=digit;
        }

        n=n/10;   
    }

    printf("%d\t%d", max, min);

    return 0;
}
