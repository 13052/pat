#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int b,s,g;
    b=n/100;
    s=n%100/10;
    g=n%10;
    for(i=0;i<b;i++){
        printf("B");
    }
    for(i=0;i<s;i++){
        printf("S");
    }
    for(i=1;i<=g;i++){
        printf("%d",i);
    }
    
    return 0;
}
/*
The first time I have code below, that's difficultilaze...
*/
// #include <stdio.h>
// int main(){
//     char c[4];
//     int i=0;
//     int tag,j,n;
//     scanf("%s",c);
//     while(c[i]!='\0'){
//         i++;
//     }
//     tag = i-1;
//     i=0;
//     if(tag==2){
//         n=c[i]-'0';
//         for(j=0;j<n;j++){
//             printf("B");
//         }
//         n=c[i+1]-'0';
//         for(j=0;j<n;j++){
//             printf("S");
//         }
//         n=c[i+2]-'0';
//         for(j=1;j<=n;j++){
//             printf("%d",j);
//         }
//     }
//     if(tag==1){
//         n=c[i]-'0';
//         for(j=0;j<n;j++){
//             printf("S");
//         }
//         n=c[i+1]-'0';
//         for(j=1;j<=n;j++){
//             printf("%d",j);
//         }
//     }
//     if(tag==0){
//         n=c[i]-'0';
//         for(j=1;j<=n;j++){
//             printf("%d",j);
//         }
//     }
//     return 0;
// }
