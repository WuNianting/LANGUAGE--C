#include <stdio.h>

// 实现数组后移m位的函数
void shiftArray(int arr[], int n, int m) {
    int temp[m]; // 临时存储后m个元素
    int i;

    // 1. 保存后m个元素到temp
    for (i = 0; i < m; i++) {
        temp[i] = arr[n - m + i];
    }

    // 2. 前n-m个元素后移m位
    for (i = n - 1; i >= m; i--) {
        arr[i] = arr[i - m];
    }

    // 3. 临时数组的元素放到数组开头
    for (i = 0; i < m; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, m;
    printf("请输入整数个数n：");
    scanf("%d", &n);
    printf("请输入后移的位数m：");
    scanf("%d", &m);

    int arr[n];
    printf("请输入%d个整数：", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    shiftArray(arr, n, m); // 调用函数处理数组

    printf("调整后的数组：");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}