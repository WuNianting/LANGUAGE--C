#include <stdio.h>
#include <math.h> // 用于sqrt函数

// 判断素数的函数
int isPrime(int num) {
    // 特殊情况：小于等于1不是素数
    if (num <= 1) {
        return 0;
    }
    // 遍历2到sqrt(num)
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) { // 能被整除，不是素数
            return 0;
        }
    }
    return 1; // 是素数
}

int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d是素数\n", num);
    } else {
        printf("%d不是素数\n", num);
    }
    return 0;
}