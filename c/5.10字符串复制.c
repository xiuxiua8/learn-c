#include <stdio.h>

int main() {
    char s1[101], s2[101];
    int i = 0;
    char c;

    // 逐个读取字符，直到遇到换行符或达到字符数组上限
    while (i < 100 && (c = getchar()) != '\n') {
        s2[i++] = c;
    }
    s2[i] = '\0';  // 在字符数组末尾加上结束符

    // 将s2中的字符串复制到s1中
    for (i = 0; s2[i] != '\0'; i++) {
        s1[i] = s2[i];
    }
    s1[i] = '\0';  // 在字符数组末尾加上结束符

    printf("%s", s1);

    return 0;
}


