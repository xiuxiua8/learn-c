#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("请输入华氏温度值：\n");
    scanf("%f", &fahrenheit);

    celsius = 5.0 / 9.0 * (fahrenheit - 32.0);

    printf("%g F=%g C\n", fahrenheit, celsius);

    return 0;
}

