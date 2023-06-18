#include <stdio.h>

// �ж�һ�����Ƿ�Ϊ����
int isComposite(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int count = 0;  // ��¼���ҵ���������������
    int num = n;    // ��n��ʼ�����ж��Ƿ�Ϊ����

    while (count < m) {
        if (isComposite(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    return 0;
}

