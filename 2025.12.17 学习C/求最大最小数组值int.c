#include <stdio.h>
#include <string.h>
int main (){
   int a[5];int num_max_idx=0;int num_min_idx=0;
   for(int i=0;i<=4;i++){
    scanf("%d",&a[i]);
   }
   for(int i=0;i<=4;i++){
    printf("%d ",a[i]);
   }
   printf("\n");
   for(int i=0;i<=4;i++){
    if(a[num_max_idx]<a[i]){
         num_max_idx=i;
    }
   }
for(int i=0;i<=4;i++){
    if(a[num_min_idx]>a[i]){
        num_min_idx=i;    
    }
   }
printf("MAX:%d |  MIN:%d",a[num_max_idx],a[num_min_idx]);
    return 0;
}
