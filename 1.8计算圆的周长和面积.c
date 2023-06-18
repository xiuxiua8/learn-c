#include <stdio.h>

int main() {
    float radius, circumference, area;
    const float PI = 3.14;

    // 输入半径
    printf("请输入半径：");
    scanf("%f", &radius);

    // 计算周长和面积
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // 输出周长和面积
    printf("周长和面积分别为：%g %g\n", circumference, area);

    return 0;
}

