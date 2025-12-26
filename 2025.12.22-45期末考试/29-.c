/*编程实现:编写一个函数求一维数组的最大值，在主函数中输入10个整数，调用该函数找出最大值并输。
注意:数组大小为10。*/
#include <stdio.h>
int max_num(int arr[],int size){
    int max_num_dex=0;
    for(int i=0;i<size;i++){
        if(arr[max_num_dex]<arr[i]){
            max_num_dex=i;
        }
    }
    return arr[max_num_dex];
}
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",max_num(arr,10));


    return 0;
}