#include <stdio.h>

// �������Լ����С�������ĺ���
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

    // ��������������
    printf("������������������\\n");
    scanf("%d %d", &a, &b);

    // �������Լ������С������
    GCD = gcd(a, b);
    LCM = lcm(a, b);

    // ������
    printf("GCD %d LCM %d\\n", GCD, LCM);

    return 0;
}

