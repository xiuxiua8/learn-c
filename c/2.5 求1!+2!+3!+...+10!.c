#include <stdio.h>

int main() {
    int i, j;
    long long sum = 0, factorial = 1;

    for (i = 1; i <= 10; i++) {
        factorial = 1;

        // 计算 i 的阶乘
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }

        // 累加阶乘的和
        sum += factorial;
    }

    printf("%lld\\n", sum);

    return 0;
}

