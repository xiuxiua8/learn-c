#include <stdio.h>
#include <ctype.h>
#include <string.h>

// ���嵥�ʽṹ������
struct Word {
    char word[100];
    int count;
};

// ������ת��ΪСд��ʽ
void toLowerCase(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

// �ж�һ���ַ��Ƿ�Ϊ��ĸ
int isLetter(char c) {
    return isalpha(c);
}

int main() {
    char text[10000];
    int len, count = 0, i, j;
    struct Word words[1000];

    // �����ı�
    printf("������һ���ı���\\n");
    fgets(text, 10000, stdin);
    len = strlen(text);






    // ͳ�Ƶ��ʳ��ִ���
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




    // ������
    printf("Ƶ����ߵ�ǰʮ�����ʼ�����ִ���Ϊ��\\n");
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

