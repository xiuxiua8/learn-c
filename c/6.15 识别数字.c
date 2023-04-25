//6.15 ʶ������

#include <stdio.h>
#include <ctype.h>

void extract_numbers(const char *str);

int main() {
    char str[100];

    // �����ַ���
    printf("������һ�����ո���ַ�����\\n");
    fgets(str, 100, stdin);

    // �������
    extract_numbers(str);

    return 0;
}

void extract_numbers(const char *str) {
    int i = 0;
    while (str[i] != '\\0') {
        int num = 0;
        int sign = 1;
        while (isdigit(str[i]) || str[i] == '-' || str[i] == '+') {
            if (str[i] == '-') {
                sign = -1;
            }
            else if (isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
            }
            i++;
        }
        if (num != 0 || (num == 0 && sign == 1 && (str[i - 1] == '-' || str[i - 1] == '+'))) {
            printf("%d ", num * sign);
        }
        i++;
    }
}

