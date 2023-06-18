//5.2ɸѡ��������
#include <stdio.h>

int main() {
    int n, i, j;
    int is_prime[1001] = {1, 1, 0}; // ��ʼ����0 �� 1 ��������

    printf("������ n��");
    scanf("%d", &n);

    // ɸѡ��������
    for (i = 2; i <= n; i++) {
        if (!is_prime[i]) {
            for (j = 2 * i; j <= n; j += i) {
                is_prime[j] = 1;
            }
        }
    }

    // �����������
    j = 0;
    for (i = n; i >= 2; i--) {
        if (!is_prime[i]) {
            printf("%d ", i);
            j++;
            if (j % 10 == 0) {
                printf("\\n");
            }
        }
    }

    return 0;
}

