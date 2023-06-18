#include <stdio.h>
#include <string.h>

int strcmp(char *p1, char *p2) {
    int len1 = strlen(p1);
    int len2 = strlen(p2);
    int minlen = len1 < len2 ? len1 : len2;
    int i;

    for (i = 0; i < minlen; i++) {
        if (*(p1 + i) < *(p2 + i)) {
            return -1;
        }
        else if (*(p1 + i) > *(p2 + i)) {
            return 1;
        }
    }

    if (len1 == len2) {
        return 0;
    }
    else if (len1 < len2) {
        return -1;
    }
    else {
        return 1;
    }
}

int main() {
    char str1[100], str2[100];

    printf("请输入两个字符串：\\n");
    scanf("%s%s", str1, str2);

    int result = strcmp(str1, str2);

    printf("比较结果为：%d\\n", result);

    return 0;
}

