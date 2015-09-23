#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//sort 
int sort_l(int *a){
    int i,j, temp, ret;
    ret=0;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=3;i>=0;i--){
        ret= ret + (a[i]*pow(10, i));
    }
    return ret;
}

//sort
int sort_s(int *a){
    int i, j, temp, ret;
    ret=0;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=3;i>=0;i--){
        ret= ret + (a[i]*pow(10, i));
    }
    return ret;
}


int main(){

    int n,a[4];
    int result=0;
    int l, s;
    scanf("%d",&n);
    if(n%1111==0){//if 4 number are same, then the n%1111 should equals to 0
        printf("%d - %d = 0000\n", n, n);
    }
    else{
        while(result!=6174){//calculate
            a[0]=n/1000;
            a[1]=(n%1000)/100;
            a[2]=(n%100)/10;
            a[3]=n%10;
            l=sort_l(a);
            s=sort_s(a);
            result=l-s;
            printf("%04d - %04d = %04d\n",l, s, result);
            n=result;
        }
    }

    return 0;
}
