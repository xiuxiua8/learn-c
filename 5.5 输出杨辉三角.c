//5.5 ����������
#include <stdio.h>

#define MAX_N 20

int main() {
    int n, i, j;
    int a[MAX_N][MAX_N] = {0};

    printf("������Ҫ��ӡ����������ε�������������20�У���");
    scanf("%d", &n);

    // ��ʼ����һ��Ϊ1
    for (i = 0; i < n; i++) {
        a[i][0] = 1;
    }

    // ���ݵ��ƹ�ʽ�������������
    for (i = 1; i < n; i++) {
        for (j = 1; j <= i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    // ������������
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
