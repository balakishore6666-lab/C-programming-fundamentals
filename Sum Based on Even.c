#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[100];
    int i;
    int evenElementSum = 0, oddElementSum = 0;
    int evenIndexSum = 0, oddIndexSum = 0;

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            evenElementSum += arr[i];
        else
            oddElementSum += arr[i];

        if(i % 2 == 0)
            evenIndexSum += arr[i];
        else
            oddIndexSum += arr[i];
    }

    printf("%d %d %d %d", evenElementSum, oddElementSum, evenIndexSum, oddIndexSum);

    return 0;
}
