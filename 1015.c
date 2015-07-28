#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stu
{
    int id;
    int moral;
    int abil;
    int total;
    int dou;
    int mba;
    int abm;
    int alow;
    int acc;
}Stu;
int sort_total(Stu *a, int n){
    int i, j;
    Stu max;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i].dou==1&&a[j].dou==1){
                if(a[i].total<a[j].total){
                    max = a[i];
                    a[i] = a[j];
                    a[j] = max;
                }
                else if(a[i].total==a[j].total){
                    if(a[i].moral<a[j].moral){
                        max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                    }
                else if(a[i].moral==a[j].moral){
                    if(a[i].id>a[j].id){
                        max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                        }
                    }
                }

            }
            else if(a[i].mba==1&&a[j].mba==1){
                if(a[i].total<a[j].total){
                    max = a[i];
                    a[i] = a[j];
                    a[j] = max;
                }
                else if(a[i].total==a[j].total){
                    if(a[i].moral<a[j].moral){
                        max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                    }
                else if(a[i].moral==a[j].moral){
                        if(a[i].id>a[j].id){
                            max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                        }
                    }
                }
    
            }
            else if(a[i].abm==1&&a[j].abm==1){
                if(a[i].total<a[j].total){
                    max = a[i];
                    a[i] = a[j];
                    a[j] = max;
                }
                else if(a[i].total==a[j].total){
                    if(a[i].moral<a[j].moral){
                        max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                    }
                else if(a[i].moral==a[j].moral){
                        if(a[i].id>a[j].id){
                            max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                        }
                    }
                }

            }
            else if(a[i].alow==1&&a[j].alow==1){
                if(a[i].total<a[j].total){
                    max = a[i];
                    a[i] = a[j];
                    a[j] = max;
                }
                else if(a[i].total==a[j].total){
                    if(a[i].moral<a[j].moral){
                        max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                    }
                else if(a[i].moral==a[j].moral){
                        if(a[i].id>a[j].id){
                            max = a[i];
                        a[i] = a[j];
                        a[j] = max;
                        }
                    }
                }

            }
        }
    }
    return 1;
}
int main(){
    int num, low, high;
    scanf("%d %d %d",&num, &low, &high);
    int i,j;
    int count=0;
    Stu stu[num];
    for(i=0;i<num;i++){
        scanf("%d",&stu[i].id);
        scanf("%d %d",&stu[i].moral, &stu[i].abil);
        stu[i].total = stu[i].moral + stu[i].abil;
        stu[i].dou=0;
        stu[i].mba=0;
        stu[i].mba=0;
        stu[i].abm=0;
        stu[i].alow=0;
        stu[i].acc=0;
    }
    //chose students who could be accepted
    for(i=0;i<num;i++){
        if(stu[i].moral>=high&&stu[i].abil>=high){
            stu[i].dou=1;
            stu[i].acc=1;
            count++;
        }
        else if(stu[i].moral>=high&&stu[i].abil<high&&stu[i].abil>=low){
            stu[i].mba=1;
            stu[i].acc=1;
            count++;
        }
        else if(stu[i].moral<high&&stu[i].moral>=low&&stu[i].abil<high&&stu[i].abil>=low&&stu[i].moral>=stu[i].abil){
            stu[i].abm=1;
            stu[i].acc=1;
            count++;
        }
        else if(stu[i].moral<high&&stu[i].moral>=low&&stu[i].abil>=low&&stu[i].moral<stu[i].abil){
            stu[i].alow=1;
            stu[i].acc=1;
            count++;
        }
    }

    sort_total(stu, num);
    printf("%d\n",count);
    for(i=0;i<num;i++){
        if(stu[i].acc == 1&&stu[i].dou==1){
            printf("%d %d %d\n",stu[i].id, stu[i].moral, stu[i].abil);
        }
    }
    for(i=0;i<num;i++){
        if(stu[i].acc == 1&&stu[i].mba==1){
            printf("%d %d %d\n",stu[i].id, stu[i].moral, stu[i].abil);
        }
    }
    for(i=0;i<num;i++){
        if(stu[i].acc == 1&&stu[i].abm==1){
            printf("%d %d %d\n",stu[i].id, stu[i].moral, stu[i].abil);
        }
    }
    for(i=0;i<num;i++){
        if(stu[i].acc == 1&&stu[i].dou==0&&stu[i].mba==0&&stu[i].abm==0){
            printf("%d %d %d\n",stu[i].id, stu[i].moral, stu[i].abil);
        }
    }

    return 0;
}
