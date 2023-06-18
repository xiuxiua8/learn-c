#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    // 输入人名
    printf("请输入人名：");
    scanf("%s", name);

    // 输出问候语
    printf("Hello %s\n", name);

    return 0;
}

