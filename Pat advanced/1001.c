#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a + b;
    if(abs(c)<=999){
        printf("%d",c);
    }
    else if(abs(c)>999&&abs(c)<=999999){
        printf("%d",c/1000);
        printf(",");
        printf("%03d",abs(c%1000));
    }
    else if(abs(c)>=1000000){
        printf("%d",c/1000000);
        printf(",");
        printf("%03d",abs(c%1000000)/1000);
        printf(",");
        printf("%03d",abs(c%1000));
    }
    return 0;
}

