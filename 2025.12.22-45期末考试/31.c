#include <stdio.h>
int main(){
    int arr[3][3];int count=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=count++;
        }
    }

    //输出原数组
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
printf("----------------------------------------------\n");
//输出修改数组
    int sarr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sarr[i][j]=arr[j][i];
        }
    }
  for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}