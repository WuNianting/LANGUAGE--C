#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 函数声明
void user_guess_game();  // 用户猜数字的函数
void program_guess_game(); // 程序猜数字的函数
void show_menu();        // 显示菜单的函数

int main() {
    int choice;
    // 设置随机数种子，确保每次运行生成的随机数不同
    srand((unsigned int)time(NULL));

    while (1) {
        show_menu();
        printf("请输入你的选择：");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                user_guess_game();
                break;
            case 2:
                program_guess_game();
                break;
            case 0:
                printf("感谢游玩，再见！\n");
                return 0;
            default:
                printf("输入错误，请选择0、1或2！\n");
                break;
        }
    }

    return 0;
}

// 显示菜单
void show_menu() {
    printf("\n========== 猜数字游戏 ==========\n");
    printf("1. 用户猜数字\n");
    printf("2. 程序猜数字\n");
    printf("0. 退出游戏\n");
    printf("=================================\n");
}

// 用户猜数字的逻辑实现
void user_guess_game() {
    int difficulty;
    int min_num, max_num;
    int target_num;
    int user_guess;
    int guess_count = 0;

    // 选择难度
    printf("\n请选择难度：\n");
    printf("1. 简单（1-50）\n");
    printf("2. 困难（1-200）\n");
    printf("请输入难度选择：");
    scanf("%d", &difficulty);

    // 根据难度确定数字范围
    if (difficulty == 1) {
        min_num = 1;
        max_num = 50;
    } else if (difficulty == 2) {
        min_num = 1;
        max_num = 200;
    } else {
        printf("输入错误，默认选择简单难度（1-50）！\n");
        min_num = 1;
        max_num = 50;
    }

    // 生成目标数字
    target_num = rand() % (max_num - min_num + 1) + min_num;
    printf("已生成%d-%d之间的随机数字，请开始猜测！\n", min_num, max_num);

    // 循环接收用户猜测
    while (1) {
        printf("请输入你的猜测：");
        scanf("%d", &user_guess);
        guess_count++; // 记录猜测次数

        if (user_guess > target_num) {
            printf("猜大了！\n");
        } else if (user_guess < target_num) {
            printf("猜小了！\n");
        } else {
            printf("\n恭喜你，猜对了！\n");
            printf("你一共猜了%d次。\n", guess_count);

            // 根据猜测次数给出评价
            if (guess_count <= 3) {
                printf("太棒了！%d次就猜中了，你是天才！\n", guess_count);
            } else if (guess_count <= 7) {
                printf("还不错，用了%d次，继续保持！\n", guess_count);
            } else {
                printf("加油，下次可以更少！\n");
            }
            break; // 猜对后退出循环
        }
    }
}

// 程序猜数字的逻辑实现（二分查找法）
void program_guess_game() {
    int min_num = 1;
    int max_num = 100; // 初始范围1-100，用户心里想的数字限定在这个范围
    int program_guess;
    char feedback; // 接收用户反馈：b（大了）、s（小了）、c（正确）
    int guess_count = 0;

    printf("\n请你心里想一个1-100之间的数字，我来猜！\n");
    printf("当我猜测后，请输入反馈：\n");
    printf("b - 我猜大了，s - 我猜小了，c - 猜对了\n");
    system("pause"); // 暂停程序，让用户有时间想好数字（Windows系统）
    // 如果是Linux/Mac系统，替换为：sleep(1); 并添加头文件 #include <unistd.h>

    while (min_num <= max_num) {
        // 二分查找：猜中间值
        program_guess = (min_num + max_num) / 2;
        guess_count++;
        printf("\n我猜的数字是：%d\n", program_guess);
        printf("请输入你的反馈（b/s/c）：");
        scanf(" %c", &feedback); // 注意前面的空格，吸收换行符

        if (feedback == 'b' || feedback == 'B') {
            // 猜大了，缩小上限
            max_num = program_guess - 1;
        } else if (feedback == 's' || feedback == 'S') {
            // 猜小了，提高下限
            min_num = program_guess + 1;
        } else if (feedback == 'c' || feedback == 'C') {
            printf("\n太好了，我猜对了！一共猜了%d次。\n", guess_count);
            break;
        } else {
            printf("输入错误，请输入b、s或c！\n");
            guess_count--; // 无效输入，不记录次数
        }
    }

    if (min_num > max_num) {
        printf("\n你好像输入了错误的反馈，我无法猜出数字了！\n");
    }
}