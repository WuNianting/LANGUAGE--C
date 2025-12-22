//输入5个整数，计算它们的平均值(保留2位小数)
#include <stdio.h>
int main(){
    int arr[5];double sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    double result=sum/5;
    printf("%.2f",result);
    return 0;
}