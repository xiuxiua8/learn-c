#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // ��ȡ���з�

    int totalLength = 0;
    int wordCount = 0;

    while (wordCount < n) {
        char word[21];
        scanf("%s", word);

        // �������ʵ�ÿ���ַ�
        for (int i = 0; word[i] != '\0'; i++) {
            // ����ַ�����ĸ�����ۼӵ��ܳ���
            if (isalpha(word[i])) {
                totalLength++;
            }
        }

        wordCount++;
    }

    printf("%d\n", totalLength);

    return 0;
}

