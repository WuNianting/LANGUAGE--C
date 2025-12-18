#include <stdio.h>
void intToStr(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n < 10) {
        putchar(n + '0'); 
    } else {
        intToStr(n / 10);
        putchar(n % 10 + '0');
    }
}
int main() {
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("转换后的字符串：");
    intToStr(n);
    printf("\n");
    return 0;
}