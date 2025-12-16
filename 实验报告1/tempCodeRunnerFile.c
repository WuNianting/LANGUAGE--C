#include <stdio.h>
int main(){
    //定义三个变量w、h、t，用w和h分别存放体重和身高。
   float w,h,t;
    printf("分别输入体重(kg)和身高(m)\n");
    scanf("%f %f",&w,&h);
  
    t=w/(h*h);
    int num;//利用switch
    if(t<18){ 
        num=1;
       
    }
    else if(18<=t&&t<=25){
        num=2;
      
    }
    else if(25<t&&t<27){
        num=3;
        
    }
    else{
        num=4;
        
    }
    switch(num){
        case 1:
        printf("偏瘦");
        break;
        case 2:
        printf("正常");
        break;
        case 3:
        printf("超重");
        break;
        case 4:
        printf("肥胖");
        break;
    }
    return 0;
}