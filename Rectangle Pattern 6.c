#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int rows, columns;
      scanf("%d%d", &rows,&columns);

    for (int i=0; i<rows;i++) {
        for (int j=0;j<columns;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
