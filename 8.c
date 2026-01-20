#include <stdio.h>
#include <time.h>
int main(){
    clock_t end_time,start_times;
    start_times=clock();
    double temp;
    for(int i=0;i<=10000;i++){
        end_time=clock();
        temp=(double)(end_time-start_times)/CLOCKS_PER_SEC;
        printf("time:%.2fs\n",temp);
    }
  

    return 0;
}