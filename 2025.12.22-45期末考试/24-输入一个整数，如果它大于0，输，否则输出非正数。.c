//输入一个整数，如果它大于0，输出"正数"，否则输出"非正数"。
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>0){
        printf("正数");
    }
    else{
        printf("非正数");
    }


    return 0;
}