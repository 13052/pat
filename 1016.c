#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int selcet(int a, int da){
    int i=0;
    int temp;
    int final=0;
    while(a!=0){
        //select and calculate the pa;
        temp=a%10;
        if(temp==da){
            final+=temp*pow(10,i);
            i++;
        }
        a/=10;
    }
    return final;
}

int main(){
    int a, da, b, db;
    scanf("%d %d %d %d", &a, &da, &b, &db);
    printf("%d",selcet(a,da)+selcet(b,db));
    return 0;
} 