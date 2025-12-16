#include <stdio.h>
int main(){
    int input;
    printf("输入一个三位正整数\n");
    scanf("%d",&input);//输入一个三位正整数 165 1*100+6*10+5*1=165
    int a,b,c;
    a=input/100;//获取百位
    b=input/10%10;//获取十位
    c=input%10;//获取个位
    int num=c*100+b*10+a*1;
    printf("反向输出数字为:%d",num);
    return 0;
}
