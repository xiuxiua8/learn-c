#include <stdio.h>
#include <ctype.h>
#include <string.h>

// 定义单词结构体类型
struct Word {
    char word[100];
    int count;
};

// 将单词转换为小写形式
void toLowerCase(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

// 判断一个字符是否为字母
int isLetter(char c) {
    return isalpha(c);
}

int main() {
    char text[10000];
    int len, count = 0, i, j;
    struct Word words[1000];

    // 输入文本
    printf("请输入一段文本：\\n");
    fgets(text, 10000, stdin);
    len = strlen(text);






    // 统计单词出现次数
    for (i = 0; i < len; i++) {
        if (isLetter(text[i])) {
            j = i;
            while (isLetter(text[j])) {
                j++;
            }
            char temp[100];
            strncpy(temp, text + i, j - i);
            temp[j-i] = '\\0';
            toLowerCase(temp);
            int found = 0;
            for (int k = 0; k < count; k++) {
                if (strcmp(temp, words[k].word) == 0) {
                    words[k].count++;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                strcpy(words[count].word, temp);
                words[count].count = 1;
                count++;
            }
            i = j;
        }
    }




    // 输出结果
    printf("频率最高的前十个单词及其出现次数为：\\n");
    for (i = 0; i < 10 && i < count; i++) {
        int maxIndex = i;
        for (j = i+1; j < count; j++) {
            if (words[j].count > words[maxIndex].count ||
                (words[j].count == words[maxIndex].count && strcmp(words[j].word, words[maxIndex].word) < 0)) {
                maxIndex = j;
            }
        }
        printf("%s:%d\\n", words[maxIndex].word, words[maxIndex].count);
        struct Word temp = words[i];
        words[i] = words[maxIndex];
        words[maxIndex] = temp;
    }

    return 0;
}

