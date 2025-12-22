#include <stdio.h>
void repeat(int n){
    for(int i=1;i<=n;i++){
        printf("Hello\n");
    }
}
int main(){
    int x;
    scanf("%d",&x);
    repeat(x);
}