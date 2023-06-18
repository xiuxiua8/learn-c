#include <stdio.h>

// 判断一个数是否为合数
int isComposite(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int count = 0;  // 记录已找到的连续合数个数
    int num = n;    // 从n开始递增判断是否为合数

    while (count < m) {
        if (isComposite(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    return 0;
}

