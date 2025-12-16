#include <stdio.h>

int main(){
    char c;
    for(int i=1;(c=getchar())!='\n';i++){
        printf("%c",c);
    }
   

    return 0;
}