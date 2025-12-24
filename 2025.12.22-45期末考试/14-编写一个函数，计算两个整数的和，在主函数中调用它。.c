//编写一个函数，计算两个整数的和，在主函数中调用它。
#include <stdio.h>
int sum(int a,int b){
    int result=a+b;
    return result;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",sum(a,b));

    return 0;
}