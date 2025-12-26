//输入一个正整数n，输出1到n之间所有整数的和。
#include <stdio.h>
int main(){
    int x;int sum_result=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        sum_result+=i;
    }
    printf("%d",sum_result);


    return 0;
}