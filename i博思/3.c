#include <stdio.h>
#include <string.h>

// 十六进制字符映射表
const char HEX_CHAR[] = "0123456789ABCDEF";
// 存储结果的字符串（全局变量，避免递归中重复定义）
char hex_str[20];
// 字符串索引（记录当前写入位置）
int idx = 0;

// 递归函数：将整数n转换为十六进制字符串
void decToHex(int n) {
    if (n == 0) {
        // 处理n=0的特殊情况（直接写入'0'）
        if (idx == 0) {
            hex_str[idx++] = '0';
        }
        return;
    }
    // 递归处理高位（n/16）
    decToHex(n / 16);
    // 处理当前位（n%16），写入对应字符
    hex_str[idx++] = HEX_CHAR[n % 16];
}

int main() {
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);

    // 初始化全局变量
    idx = 0;
    memset(hex_str, 0, sizeof(hex_str));

    // 调用递归函数
    decToHex(n);

    // 输出结果
    printf("对应的十六进制字符串：\"%s\"\n", hex_str);
    return 0;
}