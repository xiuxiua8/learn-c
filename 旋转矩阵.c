#include <stdio.h>

void rotate(int A[][10], int m, int n, int B[][10]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            B[n-j-1][i] = A[i][j];
        }
    }
}

int main() {
    int m, n;
    int A[10][10], B[10][10];
    int i, j;

    // ������������������
    printf("����������������������");
    scanf("%d %d", &m, &n);

    // ������������Ԫ��
    printf("����������Ԫ�أ�\\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // ��ʱ����ת����
    rotate(A, m, n, B);

    // ��ʾ���
    printf("��ת��ľ���Ϊ��\\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\\n");
    }

    return 0;
}

