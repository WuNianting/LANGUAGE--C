#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x>'A'&& x<'Z'){
        printf("是大写");
    }
    else{
        printf("小写");
    }
    return 0;
}