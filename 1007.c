

#include <stdio.h>
#include <math.h>

//Judge if a number is prime
int is_prime(int a){
    int i;
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    int cnt=0;
    scanf("%d",&n);
    int i;
    int temp =2;

    //Looking for pair of prime that fulfil the requirement
    for(i=3;i<=n;i++){
        if(is_prime(i)==1){
            if(i-temp==2){
                cnt++;
            }
            temp=i;
        }

    }    

    //Print count of the pair
    printf("%d",cnt);
    return 0;
}