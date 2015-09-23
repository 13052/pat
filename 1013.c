#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int n){
    //judge if a number is a prime number
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int m,n;
    int cntline=0;
    scanf("%d %d",&m, &n);
    int cnt=0;
    int i;
    for(i=2;i;i++){
        if(is_prime(i)==1){
            cnt++;
            if(cnt>=m&&cnt<n){
                //following if else statment is to control output format
                if (cntline%10==0&&cntline!=0){
                    printf("\n");
                }
                else if(cntline!=0) printf(" ");
                printf("%d",i);
                cntline++;
            }
            if(cnt>=m&&cnt==n){
                if(cntline!=0){         //output format control
                    printf(" ");
                }
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}