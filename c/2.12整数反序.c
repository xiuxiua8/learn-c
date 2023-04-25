#include <stdio.h>

int main() {
    int num, reversed_num;

    printf("请输入一个4位整数：\n");
    scanf("%d", &num);

    // 将数字反转
    reversed_num = (num % 10) * 1000 + (num / 10 % 10) * 100 + (num / 100 % 10) * 10 + (num / 1000);

    // 乘以2并输出结果
    printf("%d\n", reversed_num * 2);

    return 0;
}

