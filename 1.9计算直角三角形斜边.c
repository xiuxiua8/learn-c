#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    // ����ֱ�Ǳ�
    printf("������ֱ�Ǳ� a �� b��");
    scanf("%f %f", &a, &b);

    // ����б�߳���
    c = sqrt(a*a + b*b);

    // ������
    printf("c=%g\n", c);

    return 0;
}

