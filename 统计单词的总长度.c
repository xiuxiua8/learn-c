#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // 读取换行符

    int totalLength = 0;
    int wordCount = 0;

    while (wordCount < n) {
        char word[21];
        scanf("%s", word);

        // 遍历单词的每个字符
        for (int i = 0; word[i] != '\0'; i++) {
            // 如果字符是字母，则累加到总长度
            if (isalpha(word[i])) {
                totalLength++;
            }
        }

        wordCount++;
    }

    printf("%d\n", totalLength);

    return 0;
}

