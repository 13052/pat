#include <stdio.h>

int trans(int n, int c){
    //transform number
    int temp, ret;
    if(n>=c){
        n=n/c;
        temp = n%c;
        trans(n,c);
        printf("%d",temp);
    }
    ret = n;
    return n;
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    int ret;
    scanf("%d %d %d", &a, &b, &c);
    int sum;
    sum = a + b;
    if(sum < c){
        printf("%d\n",sum);
    }
    else{
        ret = sum%c;    //record the last number
        trans(sum, c);
        printf("%d",ret);
    }
    return 0;
}