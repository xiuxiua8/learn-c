#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int a, b;
    printf("请输入两个正整数：\n");
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("它们的最大公因数为：%d\n", ans);
    return 0;
}
