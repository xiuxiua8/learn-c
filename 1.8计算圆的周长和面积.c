#include <stdio.h>

int main() {
    float radius, circumference, area;
    const float PI = 3.14;

    // ����뾶
    printf("������뾶��");
    scanf("%f", &radius);

    // �����ܳ������
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // ����ܳ������
    printf("�ܳ�������ֱ�Ϊ��%g %g\n", circumference, area);

    return 0;
}

