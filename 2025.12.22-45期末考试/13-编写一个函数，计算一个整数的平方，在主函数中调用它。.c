//编写一个函数，计算一个整数的平方，在主函数中调用它。
#include <stdio.h>
int aqura(int x){
    int result =x*x; 

    return result;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",aqura(x));


    return 0;
}