#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 初始化随机数种子，确保每次运行生成不同的随机数
    srand((unsigned int)time(NULL));
    // 生成1-100之间的随机数（rand()生成0到RAND_MAX的随机数，取余100得0-99，加1后为1-100）
    int target = rand() % 100 + 1;
    int guess;       // 存储用户猜测的数字
    int guess_count = 0;  // 统计猜测次数

    printf("==================== 猜数字游戏 ====================\n");
    printf("规则：系统已生成1-100之间的随机整数，请输入你猜测的数字\n");
    printf("====================================================\n\n");

    // 循环猜测，直到猜对为止
    while (1) {
        printf("请输入你猜测的数字：");
        // 判断用户输入是否为有效整数
        if (scanf("%d", &guess) != 1) {
            printf("输入错误！请输入有效的整数。\n");
            // 清空输入缓冲区，避免无效输入导致循环卡死
            while (getchar() != '\n');
            continue;
        }

        guess_count++;  // 每有效输入一次，猜测次数加1

        // 根据用户输入与目标数字的大小关系给出提示
        if (guess > target) {
            printf("猜大了！请重新猜测。\n");
        } else if (guess < target) {
            printf("猜小了！请重新猜测。\n");
        } else {
            // 猜对时退出循环，给出结果
            printf("\n恭喜你猜对了！\n");
            printf("目标数字是：%d\n", target);
            printf("你一共猜测了 %d 次\n", guess_count);
            break;
        }
    }

    return 0;
}
