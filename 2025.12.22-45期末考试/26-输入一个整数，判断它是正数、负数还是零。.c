//输入一个整数，判断它是正数、负数还是零。
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>0){
        printf("zheng");
    }
    else if(x<0){
        printf("fu");
    }
    else{
        printf("is 0");
    }

    return 0;
}