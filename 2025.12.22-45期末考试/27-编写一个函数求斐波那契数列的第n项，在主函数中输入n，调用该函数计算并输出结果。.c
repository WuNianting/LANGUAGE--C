/*编程实现:编写一个函数求斐波那契数列的第n项，在主函数中输入n，调用该函数计算并输出结果。
注意:斐波那契数列:1,1,2,3,5,8...T*/
#include <stdio.h>
int result(int n){
    if(n==1 ||n==2){
        return 1;
    }
    int a=1,b=1;
    for(int i=3;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
return b;

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",result(n));


    return 0;
}