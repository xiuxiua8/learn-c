//5.2筛选法找素数
#include <stdio.h>

int main() {
    int n, i, j;
    int is_prime[1001] = {1, 1, 0}; // 初始化，0 和 1 不是素数

    printf("请输入 n：");
    scanf("%d", &n);

    // 筛选法求素数
    for (i = 2; i <= n; i++) {
        if (!is_prime[i]) {
            for (j = 2 * i; j <= n; j += i) {
                is_prime[j] = 1;
            }
        }
    }

    // 逆序输出素数
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

