//输入一个字符，判断它是否为数字字符(0-9)。
#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x>'0'&& x<'9'){
        printf("YES");
    }
    else{
        printf("nope");
    }
    return 0;
}