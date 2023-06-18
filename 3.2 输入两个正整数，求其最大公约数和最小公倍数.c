#include <stdio.h>

// 定义最大公约和最小公倍数的函数
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    int GCD, LCM;

    // 输入两个正整数
    printf("请输入两个正整数：\\n");
    scanf("%d %d", &a, &b);

    // 计算最大公约数和最小公倍数
    GCD = gcd(a, b);
    LCM = lcm(a, b);

    // 输出结果
    printf("GCD %d LCM %d\\n", GCD, LCM);

    return 0;
}

