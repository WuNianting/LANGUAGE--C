#include <stdio.h>
void show_menu();
int main(){
    int choice;
while(1){
    show_menu();
    printf("输入序号");
    scanf("%d",&choice);
    switch(choice){
        case 1:break;
        //join people
        case 2:break;
        //join computer
        case 3:printf("退出成功");
                return 0;
        default:printf("nope");break;
    }
}
    return 0;
}
void join(){

}
void show_menu() {
    printf("\n========== 猜数字游戏 ==========\n");
    printf("1. 用户猜数字\n");
    printf("2. 程序猜数字\n");
    printf("3. 退出游戏\n");
    printf("=================================\n");
}
