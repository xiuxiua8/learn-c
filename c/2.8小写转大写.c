#include <stdio.h>

int main() {
    char c1, c2, c3, c4;

    printf("请输入一个长度为4的小写英文单词：\n");
    scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

    c1 = c1 - 'a' + 'A';
    c2 = c2 - 'a' + 'A';
    c3 = c3 - 'a' + 'A';
    c4 = c4 - 'a' + 'A';

    printf("%c%c%c%c\n", c1, c2, c3, c4);

    return 0;
}

