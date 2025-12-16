#include <stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=30;j++){
            printf(" ");
            
        }//6 4 2 0
        for(int j=1;j<=8-(2*i);j++){
            printf(" ");
            
        }//1 3 5 7
        for(int j=1;j<=2*i-1;j++){
            printf("*");
            
        }  
        printf("\n"); 
    }
for(int i=1;i<=3;i++){
    for(int j=1;j<=30;j++){printf(" ");}
    for(int j=1;j<=7-i*2;j++)//5 3 1
    {
        printf("*");
    }
printf("\n");
}


    return 0;
}