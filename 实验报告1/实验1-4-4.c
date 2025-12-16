#include <stdio.h>

int main() {
    int day = 9;  // 从第9天倒推到第1天（共9步）
    int x = 1;    // 第10天早上剩余1个桃子

    // 逆向计算每天的桃子数
    while (day > 0) {
        x = (x + 1) * 2;  // 前一天的桃子数 = (当天数量 + 1) * 2
        day--;
    }
    printf("第一天共摘了%d个桃子\n", x);
    return 0;
}