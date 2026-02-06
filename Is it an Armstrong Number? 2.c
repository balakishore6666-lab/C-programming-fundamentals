#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int count=0;
    int temp=n;
    int sum;
    while(n>0)
    {
        n=n/10;
        count ++;
    }
    n=temp;
    while(n>0)
    {
        int r=n%10;
        int mul=1;
        for(int i=1;i<=count;i++)
        {
            mul=mul*r;
        }
        sum=sum+mul;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
