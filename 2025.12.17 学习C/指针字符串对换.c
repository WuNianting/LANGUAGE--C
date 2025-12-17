#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100],c[100];
    gets(a);
    gets(b);
    char *ptr[3]={a,b,c};
    char *temp=ptr[0];
    ptr[0]=ptr[1];
    ptr[1]=temp;
    printf("%s |  %s",ptr[0],ptr[1]);
    


    return 0;
}