//### 8.7��������
#include <stdio.h>
#include <string.h>

// �ַ����ȽϺ��������Դ�Сд��
int compareStrings(const char* str1, const char* str2) {
    return strcasecmp(str1, str2);
}

// �ַ�����������
void swapStrings(char* str1, char* str2) {
    char temp[30];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

// �ַ���������
void sortStrings(char strings[][30], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (compareStrings(strings[j], strings[j + 1]) > 0) {
                swapStrings(strings[j], strings[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char words[100][30];
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    sortStrings(words, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}

