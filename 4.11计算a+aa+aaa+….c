#include <stdio.h>
#include <math.h>

int main() {
    int n, a;
    scanf("%d %d", &n, &a);

    // ��ʼ������
    int term = a, sum = 0;

    for (int i = 0; i < n; i++) {
        sum += term;
        term = term * 10 + a;  // ������һ��
    }

    printf("%d", sum);
    return 0;
}
