#include <stdio.h>
int main(){
    int a=0,b=0,c=0,d=0;
    char input;
    while ((input=getchar())!='\n')
    {   if((input>='a'&&input<='z')||(input>='A'&&input<='Z')){
        a++;
    }
       else if(input>='0'&&input<='9'){
        b++;
       }
       else if(input==' '){c++;}
       else{d++;}
    }
printf("字母:%d  数字:%d 空格:%d 其他:%d",a,b,c,d);
    










    return 0;
}