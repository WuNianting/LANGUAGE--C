#include <stdio.h>
int main(){
    for(int i=0;i<4;i++){
        for(int j=1;j<=33-i;j++){printf(" ");}
        for(int a=1;a<=7;a++){printf("*");}
        printf("\n");
    }
    return 0;
}