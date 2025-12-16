#include <stdio.h>

// 函数1：输入10个数
void inputArray(int arr[]) {
    printf("请输入10个整数：\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
}

// 函数2：进行处理（最小数与第一个数对换，最大数与最后一个数对换）
void processArray(int arr[]) {
    int minIndex = 0, maxIndex = 0, temp;
    // 找最小值下标
    for (int i = 1; i < 10; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    // 找最大值下标
    for (int i = 1; i < 10; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    // 最小数与第一个数对换
    temp = arr[0];
    arr[0] = arr[minIndex];
    arr[minIndex] = temp;
    // 处理最大值下标可能为0的情况
    if (maxIndex == 0) {
        maxIndex = minIndex;
    }
    // 最大数与最后一个数对换
    temp = arr[9];
    arr[9] = arr[maxIndex];
    arr[maxIndex] = temp;
}

// 函数3：输出10个数
void outputArray(int arr[]) {
    printf("处理后的数组：\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10];
    inputArray(arr);
    processArray(arr);
    outputArray(arr);
    return 0;
}