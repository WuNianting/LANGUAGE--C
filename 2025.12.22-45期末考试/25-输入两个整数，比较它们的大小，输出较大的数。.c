//输入两个整数，比较它们的大小，输出较大的数。
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}