////282编程实现:编写一个函数计算一个整数的各位数字之和，在主函数中输入一个整数，调用该函数计算并输出结果。
//注意:整数可能为正或负。
#include <stdio.h>
int sum(int x){
    if(x<0){
        x=-x;
    }
    int result=0;
    while(x>0){
        result+= x%10;
        x/=10;
    }
    return result;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",sum(x));

    return 0;
}