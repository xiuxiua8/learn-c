#include <stdio.h>

int main() {
    int i, j;
    long long sum = 0, factorial = 1;

    for (i = 1; i <= 10; i++) {
        factorial = 1;

        // ���� i �Ľ׳�
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }

        // �ۼӽ׳˵ĺ�
        sum += factorial;
    }

    printf("%lld\\n", sum);

    return 0;
}

