#include <stdio.h>
int main(){
    printf("输入任意整数x\n");
    int x;
    scanf("%d",&x);
    if (x<0){
        x=x;}
    else if(0<=x&&x<=5)
    {
       x=x*x+6; 
    }
    else{
        x=3*x-11;
    }
    printf("%d",x);
    return 0;
}