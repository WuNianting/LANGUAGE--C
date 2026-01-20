#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // windows系统函数

int main()
{
    // 设置标题
    SetConsoleTitle("TERIES");

    printf("Hello world!\n");

    // 声明并初始化句柄:标准输出
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD pos = {10, 15}; // 位置
    // 设置输出位置(句柄， 位置)
    SetConsoleCursorPosition(output, pos);
    printf("Hello world!\n");

    // 设置颜色(句柄，颜色：十六进制0-9,a-f )
    SetConsoleTextAttribute(output, 0x01);
    printf("Hello world!\n");
    SetConsoleTextAttribute(output, 0x10);
    printf("Hello world!\n");
    SetConsoleTextAttribute(output, 0xef);
    printf("Hello world!\n");

    SetConsoleTextAttribute(output, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    printf("Hello\n");
    SetConsoleTextAttribute(output, FOREGROUND_INTENSITY | FOREGROUND_RED);
    printf("Hello\n");
    SetConsoleTextAttribute(output, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("Hello\n");
    printf("Hello\n");


    // 关闭句柄
    CloseHandle(output);

    return 0;
}
