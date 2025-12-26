//输入一个字符，判断它是否为英文字母。
#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x<'Z'&&x>'A'||x<'z'&&x>'a'){
        printf("是英文字母");
    }
    else{
        printf("nope");
    }

    return 0;
}