#include <stdio.h>

void BubbleSort(int *p, int n) {
    int i, j, temp;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (*(p+j) > *(p+j+1)) {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}

int main() {
    int n, i, a[20];

    // ��������Ԫ��
    printf("������n��n��������\\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // ����������
    BubbleSort(a, n);

    // ���������
    printf("��������\\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\\n");

    return 0;
}

