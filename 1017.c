#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[1000];//use a char array to store this huge number
    int b;
    scanf("%s",a);
    scanf("%d",&b);
    int i;
    int temp=0;
    for(i=0;i<strlen(a);i++){
        //Calculate like we do it at paper.
        if(strlen(a)==1){
            printf("%d",(a[0]-'0')/b);
            temp = (a[0]-'0')% b;
            break;
        }
        temp = temp *10 +a[i]-'0';
        if(temp<b&&i!=0){
            printf("%d",temp/b);
        }
        else if(i!=0){
            printf("%d",temp/b);
            temp = temp%b;
        }
    }

    printf(" %d",temp);

    return 0;
}