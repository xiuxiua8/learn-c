//5.4 求方阵每个列的最小值
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n]; // 定义一个 n*n 的二维数组
    int min[n]; // 存储每一列的最小值

    // 读入矩阵元素
	int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 初始化每一列的最小值为第一个元素
    for (j = 0; j < n; j++) {
        min[j] = matrix[0][j];
    }

    // 依次比较每一列的元素
    for (j = 0; j < n; j++) {
        for (i = 1; i < n; i++) {
            if (matrix[i][j] < min[j]) {
                min[j] = matrix[i][j];
            }
        }
    }

    // 输出每一列的最小值
    for (j = 0; j < n; j++) {
        printf("%d ", min[j]);
    }

    return 0;
}

