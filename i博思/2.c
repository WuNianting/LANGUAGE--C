#include <stdio.h>
#include <string.h>
void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    char str1[100], str2[100], str3[100];
    char *ptr[3] = {str1, str2, str3};
    printf("请输入第1个字符串：");
    gets(str1);
    printf("请输入第2个字符串：");
    gets(str2);
    printf("请输入第3个字符串：");
    gets(str3);
    if (strcmp(ptr[0], ptr[1]) > 0) {
        swap(&ptr[0], &ptr[1]);
    }
    if (strcmp(ptr[0], ptr[2]) > 0) {
        swap(&ptr[0], &ptr[2]);
    }
    if (strcmp(ptr[1], ptr[2]) > 0) {
        swap(&ptr[1], &ptr[2]);
    }
    printf("\n排序后的字符串：\n");
    printf("%s\n", ptr[0]);
    printf("%s\n", ptr[1]);
    printf("%s\n", ptr[2]);
    return 0;
}