//数组3*2对换
#include <stdio.h>
int main(){
    int arr[3][2];int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=count++;
        }
    }
    
      for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

//
    int sarr[2][3];
      for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sarr[i][j]=arr[j][i];
        }
        printf("\n");
    }

    
      for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}