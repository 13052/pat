#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d",&n, &m);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //initialize data

    int num =  m%n; //make the m is aways smaller than the n, the result is same
    
    //print these data according the format
    for(i=n-num; i<n; i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n-num;i++){
        printf("%d",a[i]);
        if(i!=n-num-1){
            printf(" ");
        }
    }
    return 0;
}
