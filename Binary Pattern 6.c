#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);

    for (int i=0;i<N;i++) {
        int start;

        if (i%2==0)
            start=1;
        else
            start=0;

        int num = start;

        for (int j=0;j<N-i;j++) {
            printf("%d",num);

            if (num==1)
                num=0;
            else
                num=1;
        }

        printf("\n");
    }
    
    return 0;
}
