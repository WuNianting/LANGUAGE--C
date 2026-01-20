/*编程实现:输入5个字符串，找出其中最长的字符串并输出。
注意:每个字符串不超过100个字符。*/
#include <stdio.h>
#include <string.h>
int main(){
    printf("请输入五个字符串\n");int max_string=0;int max_string_index=0;
    char str[5][100];
    for(int i=0;i<5;i++){
        printf("%d:",i+1);
        scanf("%s",&str[i]);
        if(strlen(str[i])>max_string){
            max_string=strlen(str[i]);
            max_string_index=i;
        }
    }
    printf("%d:%s",max_string_index+1,str[max_string_index]);


    return 0;
}