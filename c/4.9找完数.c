#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    int foundPerfectNumber = 0; // �Ƿ��ҵ������ı�־λ����ʼֵΪ 0

    // ���뷶Χ
    scanf("%d %d", &m, &n);

    // ��������
    for (i = m; i <= n; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            foundPerfectNumber = 1; // �ҵ�����������־λ��ֵΪ 1
            printf("%d=1", i);
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    printf("+%d", j);
                }
            }
            printf("\n");
        }
    }

    // ������
    if (foundPerfectNumber == 0) { // ���û���ҵ�����
        printf("None\n");
    }

    return 0;
}

