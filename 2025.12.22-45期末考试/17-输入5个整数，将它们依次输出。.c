//输入5个整数，将它们依次输出。
#include <stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        printf("第%d个是:%d\n",i+1,arr[i]);
    }


    return 0;
}