#ifndef MYWINDOWS_H_INCLUDED
#define MYWINDOWS_H_INCLUDED

#include <windows.h>

// 系统调用模块

// 1. 初始化句柄[声明关键字, 返回值类型 函数名(参数);]
extern void initHandle();

// 2. 设置颜色
extern void setColor(int color);

// 3. 设置光标是否可见
extern void setCursorVisible(int flag);

// 4. 设置位置
extern void setPos(int x, int y);

// 5. 设置窗口大小
extern void  setWindowSize(int w, int h);

// 6. 设置标题
extern void setTitle(char title[40]);

// 7. 关闭句柄
extern void closeHandle();

#endif // MYWINDOWS_H_INCLUDED
