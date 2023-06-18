#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    // 输入直角边
    printf("请输入直角边 a 和 b：");
    scanf("%f %f", &a, &b);

    // 计算斜边长度
    c = sqrt(a*a + b*b);

    // 输出结果
    printf("c=%g\n", c);

    return 0;
}

