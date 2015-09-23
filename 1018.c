#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //initialize every record sign.
    int n;
    scanf("%d",&n);
    char a, b;
    int cnt_tie=0;
    int cnt_awin=0;
    int cnt_bwin=0;
    int cnt_ajian=0;
    int cnt_bjian=0;
    int cnt_achui=0;
    int cnt_bchui=0;
    int cnt_abu=0;
    int cnt_bbu=0;
    int i;
    for(i=0;i<n;i++){
        //input
        scanf(" %c %c",&a, &b);
        
        //cass tie
        if(a==b){
            cnt_tie++;
        }
        //case a win
        if((a=='B'&&b=='C')||(a=='J'&&b=='B')||(a=='C'&&b=='J')){
            if(a=='B'){
                cnt_abu++;
            }
            else if(a=='J'){
                cnt_ajian++;
            }
            else{
                cnt_achui++;
            }
            cnt_awin++;
        }
        //case b win
        if((b=='B'&&a=='C')||(b=='J'&&a=='B')||(b=='C'&&a=='J')){
            if(b=='B'){
                cnt_bbu++;
            }
            else if(b=='J'){
                cnt_bjian++;
            }
            else{
                cnt_bchui++;
            }
            cnt_bwin++;
        }
    }

    //print win, tie and lose
    printf("%d %d %d\n",cnt_awin, cnt_tie,cnt_bwin);
    printf("%d %d %d\n",cnt_bwin, cnt_tie,cnt_awin);

    //process to find out which one is the biggest number of pose.
    //and print them.
    if(cnt_abu>=cnt_achui&&cnt_abu>=cnt_ajian){
        printf("B ");
    }
    else if(cnt_achui>=cnt_ajian){
        printf("C ");
    }
    else{
        printf("J ");
    }

    if(cnt_bbu>=cnt_bchui&&cnt_bbu>=cnt_bjian){
        printf("B");
    }
    else if(cnt_bchui>=cnt_bjian){
        printf("C");
    }
    else{
        printf("J");
    }

    
    return 0;
}
