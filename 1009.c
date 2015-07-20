#include <stdio.h>
#include <string.h>

int main(){
    char s[80]; //store string
    int i=0;    //initialize
    char c;
    int j;
    
    //input string
    while(1){
        scanf("%c",&s[i]);
        if(s[i]=='\n')
            break;
        i++;
    }
    int tag = i;    //store counted number of string

    //print string as the requirment
    for(i=tag;i>=0;i--){
        if(s[i]==' '){
            for(j=i+1;j<tag;j++){
                printf("%c",s[j]);
            }
            printf(" ");
            tag=i;
        }
        if(i==0){
                for(j=0;j<tag;j++){
                    printf("%c",s[j]);  
                }
            }
    }
    return 0;
}