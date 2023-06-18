//11-7找勾股数
#include <stdio.h>

// 判断是否为勾股数
int isPythagorean(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

// 找出没有倍数关系的勾股数组
void findPythagoreanNumbers(int m, int n) {
    for (int a = m; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            for (int c = b + 1; c <= n; c++) {
                if (isPythagorean(a, b, c) && a % b != 0 && a % c != 0 && b % c != 0) {
                    printf("%d %d %d\n", c, b, a);
                }
            }
        }
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    findPythagoreanNumbers(m, n);

    return 0;
}

