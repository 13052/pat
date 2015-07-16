#include <stdio.h>

typedef struct input{
    int value;
    int key;
}Input;

void proc(Input *p, int k){
    int i,j;
    int n;
    for(i=0;i<k;i++){
        n=p[i].value;
        if(p[i].key ==1){
            while(n!=1){
                if(n%2==0){
                    n=n/2;
                }
                else{
                    n=n*3+1;
                    n=n/2;
                }
                for(j=0;j<k;j++){
                    if(p[j].value == n){
                        p[j].key = 0;
                    }
                }
            }
        }
    }
}

void print(Input *p, int k){
    int i, j;
    int temp;
    int cnt=0;
    int count=0;
    for(i=0;i<k;i++){
    	if(p[i].key ==1){
    		count++;
		}
	}
    //sort
    for(i=0;i<k;i++){
        for(j=i+1;j<k;j++){
            if(p[i].key==1&&p[j].key==1){
                if(p[i].value<p[j].value){
                    temp = p[i].value;
                    p[i].value = p[j].value;
                    p[j].value = temp;
                }
            }
        }
    }
    //print
    for(i=0;i<k;i++){
        if(p[i].key ==1){
        	
            printf("%d", p[i].value);
			cnt++;
			if(cnt!=count){
        		printf(" ");
			}
            
        }
    }
}

int main(){
    int k,i;
    scanf("%d",&k);
    Input a[k];
    for(i=0;i<k;i++){
        scanf("%d",&a[i].value);
        a[i].key = 1;
    }
    proc(a,k);
    print(a,k);

    return 0;
}
