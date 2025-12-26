/*编程实现:编写一个函数计算n的阶乘，在主函数中输入n，调用该函数计算并输出结果。
注意:假设n是不大于10的正整数。*/
#include <stdio.h>
int num(int n){
    int result=1;
    for(int i=1;i<=n;i++){
         result *=i;
    }
return result;

}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",num(x));




    return 0;
}