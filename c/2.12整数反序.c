#include <stdio.h>

int main() {
    int num, reversed_num;

    printf("������һ��4λ������\n");
    scanf("%d", &num);

    // �����ַ�ת
    reversed_num = (num % 10) * 1000 + (num / 10 % 10) * 100 + (num / 100 % 10) * 10 + (num / 1000);

    // ����2��������
    printf("%d\n", reversed_num * 2);

    return 0;
}

