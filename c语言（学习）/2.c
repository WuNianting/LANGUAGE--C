#include <stdio.h>
int main(){
    int i=1,sum=0;
    while(i<=100){
        
        sum=i+sum;
        i=i+2;

    }
printf("%d",sum);
    return 0;
}