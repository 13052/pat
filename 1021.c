#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

    int i;
    char c[1000];//store the number
    scanf("%s",c);
    int cnt[10]={0};
    while(i<strlen(c)){
        //count...
        switch((c[i]-'0')){
            case 0: cnt[0]++; break;
            case 1: cnt[1]++; break;
            case 2: cnt[2]++; break;
            case 3: cnt[3]++; break;
            case 4: cnt[4]++; break;
            case 5: cnt[5]++; break;
            case 6: cnt[6]++; break;
            case 7: cnt[7]++; break;
            case 8: cnt[8]++; break;
            case 9: cnt[9]++; break;
            default: break;
        }
        i++;
    }
    for(i=0;i<10;i++){
        //print...
        if(cnt[i]!=0){
            printf("%d:%d\n",i, cnt[i]);
        }
    }

    return 0;
}