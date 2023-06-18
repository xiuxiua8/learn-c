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

    // 输入矩阵的行数和列数
    printf("请输入矩阵的行数和列数：");
    scanf("%d %d", &m, &n);

    // 按行输入矩阵的元素
    printf("请输入矩阵的元素：\\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 逆时针旋转矩阵
    rotate(A, m, n, B);

    // 显示结果
    printf("旋转后的矩阵为：\\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\\n");
    }

    return 0;
}

