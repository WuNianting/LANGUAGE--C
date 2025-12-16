#include <stdio.h>

int main() {
    // 定义整型变量和字符型变量（用于指针指向）
    int num = 0;
    char ch = 'a';
    
    // 定义整型指针变量和字符型指针变量，并指向对应变量
    int *int_ptr = &num;
    char *char_ptr = &ch;
    
    // 以十六进制格式输出指针变量的地址值
    // %p 是指针的格式化输出符，默认以十六进制显示地址
    printf("整型指针变量 int_ptr 的地址：%p\n", int_ptr);
    printf("字符型指针变量 char_ptr 的地址：%p\n", char_ptr);

    return 0;
}