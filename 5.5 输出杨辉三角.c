//5.5 输出杨辉三角
#include <stdio.h>

#define MAX_N 20

int main() {
    int n, i, j;
    int a[MAX_N][MAX_N] = {0};

    printf("请输入要打印的杨辉三角形的行数（不超过20行）：");
    scanf("%d", &n);

    // 初始化第一列为1
    for (i = 0; i < n; i++) {
        a[i][0] = 1;
    }

    // 根据递推公式计算杨辉三角形
    for (i = 1; i < n; i++) {
        for (j = 1; j <= i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    // 输出杨辉三角形
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
