#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

// 结构体存储四六级词汇题目信息
typedef struct {
    char sentence[300];   // 包含空缺的句子
    char word[50];        // 正确单词
    char definition[300]; // 单词释义
    char part[30];        // 词性
} CETWord;

// 转换为小写字母（不区分大小写判断）
void toLowerCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

// 去除字符串中的换行符
void removeNewline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

int main() {
    // 四六级词汇题库（包含不同难度的词汇）
    CETWord wordBank[] = {
        {
            "The government has taken measures to ____ the problem of air pollution.",
            "tackle",
            "处理，解决（难题或局面）",
            "vt."
        },
        {
            "It is ____ that we finish the project before the deadline.",
            "crucial",
            "至关重要的，关键性的",
            "adj."
        },
        {
            "She has a ____ for learning languages; she can speak five fluently.",
            "talent",
            "天赋，才能",
            "n."
        },
        {
            "The new policy will ____ the development of renewable energy.",
            "promote",
            "促进，推动",
            "vt."
        },
        {
            "We need to ____ the data carefully before making a conclusion.",
            "analyze",
            "分析，研究",
            "vt."
        },
        {
            "The ____ of the experiment was beyond our expectations.",
            "outcome",
            "结果，效果",
            "n."
        },
        {
            "Regular exercise can ____ to better health and longer life.",
            "contribute",
            "促成，有助于",
            "vi."
        },
        {
            "He made a ____ attempt to solve the mathematical problem.",
            "fruitless",
            "无成效的，徒劳的",
            "adj."
        },
        {
            "The company is trying to ____ its market share in Asia.",
            "expand",
            "扩大，增加",
            "vt."
        },
        {
            "It's difficult to ____ the impact of the new technology on our daily life.",
            "assess",
            "评估，评定",
            "vt."
        }
    };

    int totalWords = sizeof(wordBank) / sizeof(wordBank[0]);
    int score = 0;
    char userInput[100];
    int quizCount;

    // 初始化随机数种子
    srand(time(0));

    printf("===== 四六级词汇填空题 =====");
    printf("\n说明：请填写句子中的空缺单词，输入'hint'可获取提示，输入'quit'退出\n\n");
    
    // 询问用户想做多少题
    printf("请输入要练习的题目数量（1-%d）：", totalWords);
    fgets(userInput, sizeof(userInput), stdin);
    removeNewline(userInput);
    quizCount = atoi(userInput);
    
    // 验证输入的题目数量
    if (quizCount < 1 || quizCount > totalWords) {
        printf("无效输入，将默认使用%d题\n", totalWords);
        quizCount = totalWords;
    }

    // 随机选择题目（避免重复）
    int used[totalWords] = {0};
    int completed = 0;

    while (completed < quizCount) {
        int index = rand() % totalWords;
        
        // 跳过已使用的题目
        if (used[index]) continue;
        used[index] = 1;
        completed++;

        printf("\n题目 %d/%d：\n", completed, quizCount);
        printf("%s\n", wordBank[index].sentence);
        printf("请输入答案：");
        fgets(userInput, sizeof(userInput), stdin);
        removeNewline(userInput);

        // 检查是否要退出
        if (strcmp(userInput, "quit") == 0 || strcmp(userInput, "退出") == 0) {
            printf("\n已退出练习\n");
            break;
        }

        // 检查是否需要提示
        if (strcmp(userInput, "hint") == 0 || strcmp(userInput, "提示") == 0) {
            printf("提示：词性为 %s，意为\"%s\"\n", 
                   wordBank[index].part, 
                   wordBank[index].definition);
            printf("请重新输入答案：");
            fgets(userInput, sizeof(userInput), stdin);
            removeNewline(userInput);
        }

        // 比较答案（不区分大小写）
        char lowerInput[100], lowerAnswer[50];
        strcpy(lowerInput, userInput);
        strcpy(lowerAnswer, wordBank[index].word);
        toLowerCase(lowerInput);
        toLowerCase(lowerAnswer);

        if (strcmp(lowerInput, lowerAnswer) == 0) {
            printf("正确！\n");
            score++;
        } else {
            printf("错误。正确答案是：%s\n", wordBank[index].word);
            printf("释义：%s %s\n", wordBank[index].part, wordBank[index].definition);
        }
    }

    // 显示结果
    printf("\n===== 练习结果 =====");
    printf("\n总题数：%d\n", completed);
    printf("做对：%d题\n", score);
    printf("正确率：%.1f%%\n", completed > 0 ? (float)score / completed * 100 : 0);

    return 0;
}