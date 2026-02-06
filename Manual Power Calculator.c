#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int base,exponent;
    int result=1;
    scanf("%d%d",&base,&exponent);

    for(int i=1;i<=exponent;i++) {
        result=result*base;
    }
    printf("%d",result);
    
    return 0;
}
