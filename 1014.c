#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a1[61],a2[61],a3[61],a4[61];
    int i;
    int tag;
    gets(a1);
    gets(a2);
    gets(a3);
    gets(a4);
    for(i=0;i<strlen(a1)&&i<strlen(a2);i++){
        if((a1[i]==a2[i])&&(a1[i]>='A')&&(a1[i]<='G')){
            switch(a1[i]){  
                    case 'A' : printf("MON "); break;  
                    case 'B' : printf("TUE "); break;  
                    case 'C' : printf("WED "); break;  
                    case 'D' : printf("THU "); break;  
                    case 'E' : printf("FRI "); break;  
                    case 'F' : printf("SAT "); break;  
                    case 'G' : printf("SUN "); break;  
            }  
            tag = i ;  
            break;  
        }  
    }
    for(i=tag+1;i<strlen(a1)&&i<strlen(a2);i++){
        if((a1[i]==a2[i])&&((a1[i]>='A'&&a1[i]<='N')||(a1[i]>='0'&&a1[i]<='9'))){
            if(a1[i]>='A'&&a1[i]<='N'){
                printf("%d:",(a1[i]-'A')+10);
                break;
            }
            else if(a1[i]>='0'&&a1[i]<='9'){
                printf("0%d:",a1[i]-'0');
                break;
            }
        }
    }
    /*Process the first 2 strings*/



    for(i=0;i<strlen(a3)&&i<strlen(a4);i++){
        if(a3[i]==a4[i]&&((a3[i]>= 'A' && a3[i] <= 'Z' )|| (a3[i] >= 'a' && a3[i] <= 'z'))){
            printf("%d%d",i/10,i%10);
            break;
        }
    }
    //Last 2 strings
    return 0;
}





// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(){
//     char a1[60],a2[60],a3[60],a4[60];
//     scanf("%s %s %s %s",a1, a2, a3, a4);
//     int i=0;
//     int j=0;
//     int flag=0;
//     for(i=0;i<strlen(a1)&&i<strlen(a2);i++){
//         if((a1[i]==a2[i])&&(a1[i]>='A')&&(a1[i]<='G')){
//             if(a1[i]=='A'){
//                 printf("MON ");
//                 break;
//             }
//             else if(a1[i]=='B'){
//                 printf("TUE ");
//                 break;
//             }    
//             else if(a1[i]=='C'){
//                 printf("WED ");
//                 break;
//             }
//             else if(a1[i]=='D'){
//                 printf("THU ");
//                 break;
//             }
//             else if(a1[i]=='E'){
//                 printf("FRI ");
//                 break;
//             }
//             else if(a1[i]=='F'){
//                 printf("SAT ");
//                 break;
//             }
//             else if(a1[i]=='G'){
//                 printf("SUN ");
//                 break;
//             }
//         }
        
//     }
// 	int tag=i+1;//count from next character 
//     for(i=tag;i<strlen(a1)&&i<strlen(a2);i++){
//         if((a1[i]==a2[i])&&((a1[i]>='A'&&a1[i]<='G')||(a1[i]>='0'&&a1[i]<='9'))){
//             if(a1[i]>='0'&&a1[i]<='9'){
//                 printf("%02d:",a1[i]);
//                 break;
//             }
//             else{
//                 if(a1[i]=='A')
//                     printf("10:");
//                 else if(a1[i]=='B')
//                     printf("11:");
//                 else if(a1[i]=='C')
//                     printf("12:");
//                 else if(a1[i]=='D')
//                     printf("13:");
//                 else if(a1[i]=='E')
//                     printf("14:");
//                 else if(a1[i]=='F')
//                     printf("15:");
//                 else if(a1[i]=='G')
//                     printf("16:");
//                 else if(a1[i]=='H')
//                     printf("17:");
//                 else if(a1[i]=='I')
//                     printf("18:");
//                 else if(a1[i]=='J')
//                     printf("19:");
//                 else if(a1[i]=='K')
//                     printf("20:");
//                 else if(a1[i]=='L')
//                     printf("21:");
//                 else if(a1[i]=='M')
//                     printf("22:");
//                 else if(a1[i]=='N')
//                     printf("23:");
//                 break;
//             }
//         }
//     }
//     for(j=0;j<strlen(a3)&&j<strlen(a4);j++){
//         if(a3[j]==a4[j]&&((a3[j]>='a'&&a3[j]<='z')||a3[j]>='A'&&a3[j]<='Z')){
//             printf("%02d",j);
//             break;
//         }
//     }
//     return 0;
// }
