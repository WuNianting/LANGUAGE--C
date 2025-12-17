#include <stdio.h>
#include <string.h>
int main(){
    int a=10;
    int *a_ptr=&a;
    printf("%d\n",*a_ptr);

    int b=199;int c=300;
    int temp=b;
    b=c;
    c=temp;
    printf("%d %d",b,c);

    
    return 0;
}