#include <stdio.h>
#include <string.h>
void text(int a,int b){
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
        printf("NB a:%d b:%d",a,b);
    }
    else{
        printf("FW");
    }
}
//指针函数练习 对换
void text_char(char **a,char** b){
    char *temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    text(2,1);
    printf("\n");
    char c[100]={"string"};
    char d[100]={"do it"};
    char *ptr[2]={c,d};
    printf("%s | %s",c,d);
    printf("\n");
    text_char(&ptr[0],&ptr[1]);
    printf("%s | %s",ptr[0],ptr[1]);




    return 0;
}