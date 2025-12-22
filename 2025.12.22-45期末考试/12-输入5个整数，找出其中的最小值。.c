//输入5个整数，找出其中的最小值。
#include <stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int min_num_dex=0;
    for(int i=0;i<5;i++){
        if(arr[min_num_dex]>arr[i]){
            min_num_dex=i;
        }
    }
    int result=arr[min_num_dex];
    printf("%d",result);
    return 0;
}