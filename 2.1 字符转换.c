#include <stdio.h>

int main() {
    char input[6];
    char output[6];
    int i;

    printf("����������ַ���\n");
    scanf("%s", input);

    for (i = 0; i < 5; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            output[i] = ((input[i] - 'a' + 5) % 26) + 'a';
        }
        else if (input[i] >= 'A' && input[i] <= 'Z') {
            output[i] = ((input[i] - 'A' + 5) % 26) + 'A';
        }
        else if (input[i] >= 'v' && input[i] <= 'z') {
            output[i] = input[i] - 'v' + 'a';
        }
        else if (input[i] >= 'V' && input[i] <= 'Z') {
            output[i] = input[i] - 'V' + 'A';
        }
        else {
            output[i] = input[i];
        }
    }

    output[5] = '\0'; // ����ַ���������

    printf("ת����Ľ��Ϊ��%s\n", output);

    return 0;
}

