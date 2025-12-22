#include <stdio.h>
int max_num(int arr[]){
    int max_num_dex=0;
    for(int i=0;i<5;i++){
        if(arr[max_num_dex]<arr[i]){
            max_num_dex=i;
        }
    }
    int max_num_result=arr[max_num_dex];
    return max_num_result;
}
int main(){
    int x[5];
    for(int i=0;i<=4;i++){
     scanf("%d",&x[i]);
    }
    int result=max_num(x);
    printf("%d",result);
    return 0;
}