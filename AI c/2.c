#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 函数声明
void gameMenu();          // 游戏菜单
int selectDifficulty();   // 选择难度（决定数字范围和猜测次数）
void playGame(int range, int maxChance);  // 游戏核心逻辑
bool playAgain();         // 是否重新游玩

int main() {
    // 设置随机数种子（仅初始化一次）
    srand((unsigned int)time(NULL));
    
    printf("========== 猜数字游戏 2.0 ==========\n");
    
    do {
        gameMenu();
        int choice;
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: {
                // 选择难度并开始游戏
                int difficulty = selectDifficulty();
                int range, maxChance;
                switch (difficulty) {
                    case 1: range = 50;  maxChance = 10; break;  // 简单：1-50，10次机会
                    case 2: range = 100; maxChance = 7;  break;  // 中等：1-100，7次机会
                    case 3: range = 200; maxChance = 5;  break;  // 困难：1-200，5次机会
                    default: range = 100; maxChance = 7;         // 默认中等
                }
                playGame(range, maxChance);
                break;
            }
            case 0:
                printf("感谢游玩！游戏结束。\n");
                return 0;
            default:
                printf("输入错误，请选择 0 或 1！\n");
        }
    } while (playAgain());  // 判断是否重新游玩
    
    printf("感谢游玩！游戏结束。\n");
    return 0;
}

// 游戏菜单
void gameMenu() {
    printf("\n---------- 菜单 ----------\n");
    printf("1. 开始游戏\n");
    printf("0. 退出游戏\n");
    printf("请选择：");
}

// 选择难度
int selectDifficulty() {
    int diff;
    printf("\n---------- 难度选择 ----------\n");
    printf("1. 简单（1-50，10次机会）\n");
    printf("2. 中等（1-100，7次机会）\n");
    printf("3. 困难（1-200，5次机会）\n");
    printf("请选择难度（1/2/3）：");
    
    // 输入校验
    while (scanf("%d", &diff) != 1 || diff < 1 || diff > 3) {
        // 清空输入缓冲区
        while (getchar() != '\n');
        printf("输入错误！请输入 1、2 或 3：");
    }
    return diff;
}

// 游戏核心逻辑
void playGame(int range, int maxChance) {
    // 生成随机数（1 ~ range）
    int target = rand() % range + 1;
    int guess;          // 玩家猜测的数字
    int chance = 0;     // 已用次数
    bool isWin = false; // 是否猜对
    
    printf("\n---------- 游戏开始 ----------\n");
    printf("目标数字已生成（1-%d），你有 %d 次猜测机会！\n", range, maxChance);
    
    while (chance < maxChance) {
        printf("\n剩余次数：%d | 请输入你猜的数字：", maxChance - chance);
        
        // 输入校验（确保是有效数字）
        while (scanf("%d", &guess) != 1) {
            while (getchar() != '\n'); // 清空非法输入
            printf("输入错误！请输入整数：");
        }
        
        chance++; // 次数+1
        
        // 判断猜测结果
        if (guess > target) {
            printf("猜大了！\n");
        } else if (guess < target) {
            printf("猜小了！\n");
        } else {
            printf("\n🎉 恭喜猜对了！共用了 %d 次机会 🎉\n", chance);
            isWin = true;
            break;
        }
    }
    
    // 游戏结束（未猜对）
    if (!isWin) {
        printf("\n😥 次数用完了！正确数字是：%d 😥\n", target);
    }
}

// 判断是否重新游玩
bool playAgain() {
    char choice;
    printf("\n是否重新游玩？(y/n)：");
    
    // 清空输入缓冲区，避免读取到换行符
    while (getchar() != '\n');
    scanf("%c", &choice);
    
    return (choice == 'y' || choice == 'Y');
}