#include <stdio.h>

// ����׳�
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// ����������
int permutation(int m, int n) {
    return factorial(m) / factorial(m - n);
}

// ���������
int combination(int m, int n) {
    return permutation(m, n) / factorial(n);
}

int main() {
    int m, n;

    printf("������ m �� n��");
    scanf("%d %d", &m, &n);

    printf("A(m,n)=%d C(m,n)=%d\\n", permutation(m, n), combination(m, n));

    return 0;
}

