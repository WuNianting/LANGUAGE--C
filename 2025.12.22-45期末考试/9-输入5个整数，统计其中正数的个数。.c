//输入5个整数，统计其中正数的个数。
#include <stdio.h>
int gets_num(int arr[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            sum++;
        }
    }
    return sum;
}
int main(){
    int i;
    printf("输入i值");
    scanf("%d",&i);
    int x[i];
    int result=gets_num(x,5);
    printf("%d",result);
    return 0;
}