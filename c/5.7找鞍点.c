#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[10][10];
    int rowMin[10] = {0}; // ���ÿһ����Сֵ���±�
    int colMax[10] = {0}; // ���ÿһ�����ֵ���±�
    bool hasSaddlePoint = false;

	int i,j;

    // �������Ѱ��ÿһ�е���Сֵ
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] < matrix[i][rowMin[i]]) {
                rowMin[i] = j;
            }
        }
    }

    // Ѱ��ÿһ�е����ֵ
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            if (matrix[i][j] > matrix[colMax[j]][j]) {
                colMax[j] = i;
            }
        }
    }

    // ����Ƿ���ڰ���
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
