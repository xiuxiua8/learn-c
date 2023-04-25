#include <stdio.h>

// 计算阶乘
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 计算排列数
int permutation(int m, int n) {
    return factorial(m) / factorial(m - n);
}

// 计算组合数
int combination(int m, int n) {
    return permutation(m, n) / factorial(n);
}

int main() {
    int m, n;

    printf("请输入 m 和 n：");
    scanf("%d %d", &m, &n);

    printf("A(m,n)=%d C(m,n)=%d\\n", permutation(m, n), combination(m, n));

    return 0;
}

