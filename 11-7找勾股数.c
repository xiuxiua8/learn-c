//11-7�ҹ�����
#include <stdio.h>

// �ж��Ƿ�Ϊ������
int isPythagorean(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

// �ҳ�û�б�����ϵ�Ĺ�������
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

