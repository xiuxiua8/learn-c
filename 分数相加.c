#include <stdio.h>

// �ṹ���ʾ����
typedef struct {
    int numerator;   // ����
    int denominator; // ��ĸ
} Fraction;

// շת����������Լ��
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// �������
Fraction addFractions(Fraction f1, Fraction f2) {
    Fraction result;
    // ͨ��
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    // Լ��
    int divisor = gcd(result.numerator, result.denominator);
    result.numerator /= divisor;
    result.denominator /= divisor;
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    
    Fraction sum = {0, 1};  // ��ʼ��Ϊ0

    for (int i = 0; i < n; i++) {
        Fraction fraction;
        scanf("%d/%d", &fraction.numerator, &fraction.denominator);
        sum = addFractions(sum, fraction);
    }

    printf("%d/%d\n", sum.numerator, sum.denominator);

    return 0;
}

