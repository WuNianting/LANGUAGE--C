//输入5个整数，找出其中的最大值。
#include <stdio.h>
int main(){
    int arr[5];int max_num_dex=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[max_num_dex]<arr[i]){
            max_num_dex=i;
        }
    }
    printf("%d",arr[max_num_dex]);

    return 0; 
}