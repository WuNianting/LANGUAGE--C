#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// 清除输入缓冲区，避免非法输入导致程序异常
void clearInputBuffer() {
    while (getchar() != '\n'); // 读取缓冲区所有字符直到换行符
}

// 猜数字游戏核心函数
void guessNumberGame() {
    // 1. 生成1-100之间的随机数
    srand((unsigned int)time(NULL)); // 设置随机数种子（基于系统时间）
    int targetNumber = rand() % 100 + 1; // 生成1-100的随机数
    int guess; // 用户猜测的数字
    int guessCount = 0; // 猜测次数
    int inputStatus; // 记录输入是否合法

    printf("========== 猜数字游戏 ==========\n");
    printf("游戏规则：我已经生成了1-100之间的随机数，请你猜猜看！\n");

    // 2. 循环让用户猜数字，直到猜对
    while (1) {
        printf("\n请输入你猜测的数字（1-100）：");
        inputStatus = scanf("%d", &guess);

        // 检查输入是否合法（是否为整数）
        if (inputStatus != 1) {
            clearInputBuffer(); // 清除非法输入的缓冲区
            printf("❌ 输入错误！请输入1-100之间的整数！\n");
            continue;
        }

        guessCount++; // 猜测次数+1

        // 3. 对比猜测值和目标值，给出提示
        if (guess > targetNumber) {
            printf("🔺 猜大了！再试试～\n");
        } else if (guess < targetNumber) {
            printf("🔻 猜小了！再试试～\n");
        } else {
            printf("\n🎉 恭喜你猜对了！目标数字就是 %d\n", targetNumber);
            printf("🎯 你一共猜了 %d 次\n", guessCount);
            break; // 猜对后退出循环
        }
    }
}

int main() {
    char playAgain; // 记录是否重新游戏

    do {
        guessNumberGame(); // 启动游戏

        // 询问是否重新游戏
        printf("\n是否要重新玩一局？(Y/N)：");
        scanf(" %c", &playAgain); // 空格避免读取上一次的换行符
        clearInputBuffer(); // 清除缓冲区

        // 统一转换为大写，方便判断
        playAgain = toupper(playAgain);
    } while (playAgain == 'Y'); // 输入Y则重新游戏

    printf("\n👋 游戏结束！欢迎下次再来～\n");
    return 0;
}