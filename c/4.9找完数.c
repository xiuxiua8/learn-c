#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    int foundPerfectNumber = 0; // 是否找到完数的标志位，初始值为 0

    // 输入范围
    scanf("%d %d", &m, &n);

    // 查找完数
    for (i = m; i <= n; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            foundPerfectNumber = 1; // 找到完数，将标志位赋值为 1
            printf("%d=1", i);
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    printf("+%d", j);
                }
            }
            printf("\n");
        }
    }

    // 输出结果
    if (foundPerfectNumber == 0) { // 如果没有找到完数
        printf("None\n");
    }

    return 0;
}

