// b.c
#include "a.h"  // 引入函数声明，编译时让编译器知道add的存在
#include <stdio.h>

int main() {
    int res = add(1, 2);  // 编译时：编译器看到a.h里的声明，认为合法
    printf("%d\n", res);
    return 0;
}