#include <stdio.h>
#include <math.h>

// ����ƽ���Ľṹ������
struct Point {
    float x;
    float y;
};

// ��������ƽ���֮��ľ���
float distance(struct Point p1, struct Point p2) {
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    struct Point p1, p2;
    float d;

    // ��������ƽ��������
    printf("����������ƽ�������꣺\\n");
    scanf("%f %f %f %f", &p1.x, &p1.y, &p2.x, &p2.y);

    // ���㲢�������֮��ľ���
    d = distance(p1, p2);
    printf("%f\\n", d);

    return 0;
}

