#include <stdio.h>
int main(){
    
    int a;
    a=12;
    a+=a-=a*=a;
    printf("%d\n",a);
    return 0;
}