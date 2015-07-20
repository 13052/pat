#include <stdio.h>
#define N 1000
typedef struct poly{
    int coe;
    int index;
}Poly;

int main(){
    Poly a[N];
    int i, tag;
    i = 0;
    while(i<N){
        scanf("%d %d",&a[i].coe, &a[i].index);
        if(getchar()=='\n'){
            break;
        }
        i++;
    }
    tag = i;
    int flag = 0;
    for(i=0;i<=tag;i++){    //mention that i<=tag;
        if(a[i].index!=0){
            a[i].coe*=a[i].index;
            a[i].index-=1;
            if(a[i].coe!=0){
                if (flag==1){
                    printf(" ");
                    flag =0;
                }
                printf("%d %d", a[i].coe, a[i].index);
                flag =1;
            }      
        }
    }  
    if(!flag)
        printf("0 0");
    return 0;
}