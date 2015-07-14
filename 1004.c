
/*
    Input is a list of students, every student have a neme, an id, and a score. 
    Print the name and id of highest and lowest student.
*/
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct stu{
    //Mention it that the puzzle is required 10 long string, plus '\0', we should create name[11], id[11]
    char name[11];
    char id[11];
    int score;
}Student;

void sorted_print(Student *p,int n){
    int min;
    int max =min= p[0].score;
    int i;
    for(i=0;i<n;i++){
        if (max<p[i].score){
            max = p[i].score;
        }
    }
    for(i=0;i<n;i++){
        if (min>p[i].score){
            min = p[i].score;
        }
    }
    i=0;//Reinitialize i = 0;
    int flagmax,flagmin;
    while(i<n){
        if(max==p[i].score){
            flagmax = i;
        }
        if(min==p[i].score){
            flagmin = i;
            
        }
        i++;
    }
    printf("%s",p[flagmax].name );
    printf(" ");
    printf("%s",p[flagmax].id);
    printf("\n");
    
    printf("%s",p[flagmin].name );
    printf(" ");
    printf("%s",p[flagmin].id);
    printf("\n");
}

int main(){
    int n;
    int i;
    scanf("%d",&n);
    Student stu[n];
    for(i=0;i<n;i++){
        scanf("%s",&stu[i].name);
        scanf("%s",&stu[i].id);
        scanf("%d",&stu[i].score);        
    }
    sorted_print(stu,n);
    return 0;
}