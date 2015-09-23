#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[100000];
    scanf("%s",a);
    int length=strlen(a);
    int isp;
    int i;
    printf("%c",a[0]);
    for(i=length-1;i>=0;i--){
        if(a[i]=='-'){
            isp=0;
            break;
        }
        if(a[i]=='+'){
            isp=1;
            break;
        }
    }
    if(isp==1){
        printf("%c",a[1]);
        for(i=0;i<)
    }
    else{

    }
    return 0;
}