#include <stdio.h>

int main() {
    char a;
    int i;
    printf("请输入大写字母：\n");
    scanf("%c",&a);
    i=a+32;
    printf("小写字母为：%c\n",i);
    return 0;
}
