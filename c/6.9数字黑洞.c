//6.9数字黑洞

#include <stdio.h>

int black_hole(int n) {
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    printf("请输入一个自然数：");
    scanf("%d", &n);
    printf("经过 %d 次变换可得到自然数1。\n", black_hole(n));
    return 0;
}


