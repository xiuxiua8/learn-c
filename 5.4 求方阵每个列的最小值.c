//5.4 ����ÿ���е���Сֵ
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n]; // ����һ�� n*n �Ķ�ά����
    int min[n]; // �洢ÿһ�е���Сֵ

    // �������Ԫ��
	int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // ��ʼ��ÿһ�е���СֵΪ��һ��Ԫ��
    for (j = 0; j < n; j++) {
        min[j] = matrix[0][j];
    }

    // ���αȽ�ÿһ�е�Ԫ��
    for (j = 0; j < n; j++) {
        for (i = 1; i < n; i++) {
            if (matrix[i][j] < min[j]) {
                min[j] = matrix[i][j];
            }
        }
    }

    // ���ÿһ�е���Сֵ
    for (j = 0; j < n; j++) {
        printf("%d ", min[j]);
    }

    return 0;
}

