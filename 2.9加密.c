#include <stdio.h>
#include <string.h>

int main() {
    char word[5];
    int k;
    int i;

    printf("请输入一个4字母的小写英文单词和整数k：\n");
    scanf("%s %d", word, &k);

    for (i = 0; i < strlen(word); i++) {
        word[i] = (word[i] - 'a' + k) % 26 + 'a';
    }

    printf("%s\n", word);

    return 0;
}

