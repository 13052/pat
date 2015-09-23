#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct goods{
    //store infos
    float weight;
    float total_price;
    float avg_price;
}Goods;

int sort(Goods *p, int n){
    //sort dec
    int i, j;
    Goods temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(p[i].avg_price<p[j].avg_price){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    return 0;
}

int main(){
    int n;
    float needs;
    float ton=0;
    scanf("%d %f",&n,&needs);
    Goods a[n];
    int i;
    float profits=0;
    for(i=0;i<n;i++){
        scanf("%f",&a[i].weight);
    }
    for(i=0;i<n;i++){
        scanf("%f",&a[i].total_price);
        a[i].avg_price=a[i].total_price/a[i].weight;
    }

    sort(a, n);

    for(i=0;i<n;i++){
        //greedy 
        if(ton!=needs){
            if(needs-ton>=a[i].weight){
                profits+=a[i].total_price;
                ton+=a[i].weight;
            }
            else{
                profits+=a[i].avg_price*(needs-ton);
                ton=needs;
            }
        }
    }

    printf("%.2f",profits);

    return 0;
}
