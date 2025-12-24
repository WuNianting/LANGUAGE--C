//输入5个整数，输出它们的和。
#include <stdio.h>
int main(){
    int arr[5];int result=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        result+=arr[i];
    }
    printf("%d",result);

    return 0;
}