#include "mywindows.h"

HANDLE handle;  // 句柄 全局变量

// 1. 初始化句柄[声明关键字, 返回值类型 函数名(参数);]
void initHandle(){
    handle = GetStdHandle(STD_OUTPUT_HANDLE);
}

// 2. 设置颜色
void setColor(int color){
    SetConsoleTextAttribute(handle, color);
}

// 3. 设置光标是否可见
void setCursorVisible(int flag){
    CONSOLE_CURSOR_INFO info;  // 光标信息结构体
    info.bVisible = flag;  // 光标是否可见
    info.dwSize = 100;  // 光标宽度 1-100
    SetConsoleCursorInfo(handle, &info);  // 设置光标信息
}

// 4. 设置位置
void setPos(int x, int y){
    COORD coord = {x*2, y};  // 英文字母/标点符号占1位，汉字占2位
    SetConsoleCursorPosition(handle, coord);
}

// 5. 设置窗口大小
void  setWindowSize(int w, int h){
    // 设置控制台屏幕缓冲区大小
    COORD coord = {w, h};
    SetConsoleScreenBufferSize(handle, coord);
    // 设置控制台窗口的显示区域大小(左上角和右下角坐标)
    SMALL_RECT rect = {0, 0, w-1, h-1};
    // 设置控制台窗口的显示区域(1:启用显示区域的更新)
    SetConsoleWindowInfo(handle, 1, &rect);
}

// 6. 设置标题
void setTitle(char title[40]){
    SetConsoleTitle(title);
}

// 7. 关闭句柄
void closeHandle(){
    closeHandle();
}
