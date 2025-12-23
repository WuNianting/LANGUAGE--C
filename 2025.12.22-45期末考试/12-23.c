#include <stdio.h>

// 统计数组中正数的个数
int gets_num(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            sum++;
        }
    }
    return sum;
}

int main() {
    // 定义长度为5的数组（题目要求输入5个整数）
    int x[5];
    // 调用函数统计正数个数
    int result = gets_num(x, 5);
    // 输出结果
    printf("正数的个数：%d\n", result);
    return 0;
}