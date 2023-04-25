#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[10][10];
    int rowMin[10] = {0}; // 存放每一行最小值的下标
    int colMax[10] = {0}; // 存放每一列最大值的下标
    bool hasSaddlePoint = false;

	int i,j;

    // 输入矩阵并寻找每一行的最小值
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] < matrix[i][rowMin[i]]) {
                rowMin[i] = j;
            }
        }
    }

    // 寻找每一列的最大值
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            if (matrix[i][j] > matrix[colMax[j]][j]) {
                colMax[j] = i;
            }
        }
    }

    // 检查是否存在鞍点
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == matrix[colMax[j]][j] && i == rowMin[i]) {
                printf("%d %d %d\n", i + 1, j + 1, matrix[i][j]);
                hasSaddlePoint = true;
            }
        }
    }

    if (!hasSaddlePoint) {
        printf("None\n");
    }

    return 0;
}
