#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10];
    int i,j;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++){
        //find out the minimum number of these numbers but 0
        //print it and minus 1 of this number
        if(a[i]){
            printf("%d",i);
            a[i]--;
            break;
        }
    }
    for(i=0;i<10;i++){
        //print all the numbers from small to large
        if(a[i]){
            for(j=0;j<a[i];j++){
                printf("%d",i);
            }
        }
    }
    return 0;
    
}
