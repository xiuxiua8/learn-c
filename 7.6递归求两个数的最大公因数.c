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
    printf("������������������\n");
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("���ǵ��������Ϊ��%d\n", ans);
    return 0;
}
