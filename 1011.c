#include <stdio.h>
#include <stdlib.h>
int main(){
    int t;
    long a,b,c;
    int i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%ld %ld %ld",&a, &b, &c);
        if(a+b>c){
            printf("Case #%d: true\n", i+1);
        }
        else{
            printf("Case #%d: false\n", i+1);
        }
    }
    return 0;
}