#include <stdio.h>

int main() {
    int n, i, j, tmp;
    scanf("%d", &n);
    int a[n]; // ����һ����СΪn����������a

    // ����n������
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // ѡ������
    for (i = 0; i < n - 1; i++) {
        // ��a[i]��a[n-1]���ҵ����ֵ���������±걣����max������
        int max = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] > a[max]) {
                max = j;
            }
        }
        // ��a[i]��a[max]����
        tmp = a[i];
        a[i] = a[max];
        a[max] = tmp;
    }

    // �������������
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

