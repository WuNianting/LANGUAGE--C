//输入一个正整数n，输出1到n之间所有偶数的和。
#include <stdio.h>
int main(){
    int x;int sum=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(i  % 2==0){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}