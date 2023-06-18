#include <stdio.h>
#include <math.h>

int main() {
    int n, a;
    scanf("%d %d", &n, &a);

    // 初始化变量
    int term = a, sum = 0;

    for (int i = 0; i < n; i++) {
        sum += term;
        term = term * 10 + a;  // 生成下一项
    }

    printf("%d", sum);
    return 0;
}
