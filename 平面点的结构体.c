#include <stdio.h>
#include <math.h>

// 定义平面点的结构体类型
struct Point {
    float x;
    float y;
};

// 计算两个平面点之间的距离
float distance(struct Point p1, struct Point p2) {
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    struct Point p1, p2;
    float d;

    // 输入两个平面点的坐标
    printf("请输入两个平面点的坐标：\\n");
    scanf("%f %f %f %f", &p1.x, &p1.y, &p2.x, &p2.y);

    // 计算并输出两点之间的距离
    d = distance(p1, p2);
    printf("%f\\n", d);

    return 0;
}

