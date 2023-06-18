//8.10矩阵的最大和四个最小
#include <stdio.h>

// 找到最小值的坐标
void findMin(int matrix[][5], int *row, int *col) {
    int min = matrix[0][0];
    *row = 0;
    *col = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                *row = i;
                *col = j;
            }
        }
    }
}

// 找到最大值的坐标
void findMax(int matrix[][5], int *row, int *col) {
    int max = matrix[0][0];
    *row = 0;
    *col = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                *row = i;
                *col = j;
            }
        }
    }
}

// 交换元素
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 将最大元素放在中心，四个最小元素放在四个角
void transformMatrix(int matrix[][5]) {
    int maxRow, maxCol;
    findMax(matrix, &maxRow, &maxCol);
    int centerRow = 2;
    int centerCol = 2;
    swap(&matrix[centerRow][centerCol], &matrix[maxRow][maxCol]);

    int minRow, minCol;
    for (int i = 0; i < 4; i++) {
        findMin(matrix, &minRow, &minCol);
        swap(&matrix[i][i], &matrix[minRow][minCol]);
    }
}

int main() {
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transformMatrix(matrix);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

