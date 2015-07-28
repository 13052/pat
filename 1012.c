#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int a1,a2,a3,a4,a5;
    a1=a2=a3=a4=a5=0;
    int cnt1,cnt2,cnt3,cnt4,cnt5;
    cnt1=cnt2=cnt3=cnt4=cnt5=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(!(a[i]%5)&&!(a[i]%2)){
            cnt1++;
            a1+=a[i];
        }
        if(a[i]%5==1){
            cnt2++;
            if(cnt2%2==1){
                a2+=a[i];
            }
            else{
                a2-=a[i];
            }
        }
        if(a[i]%5==2){
            cnt3++;
            a3++;
        }
        if(a[i]%5==3){
            a4+=a[i];
            cnt4++;
        }
        if(a[i]%5==4){
            cnt5++;
            if(a5<a[i]){
                a5=a[i];
            }
        }
    }
    if(cnt1==0){
        printf("N ");
    }else printf("%d ",a1);
    if(cnt2==0){
        printf("N ");
    }else printf("%d ",a2);
    if(cnt3==0){
        printf("N ");
    }else printf("%d ",a3);
    if(cnt4==0){
        printf("N ");
    }else printf("%0.1f ",((float)a4)/cnt4);
    if(cnt5==0){
        printf("N");
    }else printf("%d",a5);
    return 0;
}
