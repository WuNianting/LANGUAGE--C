//输入两个整数，交换它们的值并输出。
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("交换后:%d %d",a,b);

    return 0;
}