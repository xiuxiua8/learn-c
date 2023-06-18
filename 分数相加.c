#include <stdio.h>

// 结构体表示分数
typedef struct {
    int numerator;   // 分子
    int denominator; // 分母
} Fraction;

// 辗转相除法求最大公约数
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// 分数相加
Fraction addFractions(Fraction f1, Fraction f2) {
    Fraction result;
    // 通分
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    // 约分
    int divisor = gcd(result.numerator, result.denominator);
    result.numerator /= divisor;
    result.denominator /= divisor;
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    
    Fraction sum = {0, 1};  // 初始和为0

    for (int i = 0; i < n; i++) {
        Fraction fraction;
        scanf("%d/%d", &fraction.numerator, &fraction.denominator);
        sum = addFractions(sum, fraction);
    }

    printf("%d/%d\n", sum.numerator, sum.denominator);

    return 0;
}

