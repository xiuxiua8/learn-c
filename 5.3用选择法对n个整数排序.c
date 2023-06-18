#include <stdio.h>

int main() {
    int n, i, j, tmp;
    scanf("%d", &n);
    int a[n]; // 定义一个大小为n的整型数组a

    // 输入n个整数
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 选择排序
    for (i = 0; i < n - 1; i++) {
        // 从a[i]到a[n-1]中找到最大值，并将其下标保存在max变量中
        int max = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] > a[max]) {
                max = j;
            }
        }
        // 将a[i]和a[max]交换
        tmp = a[i];
        a[i] = a[max];
        a[max] = tmp;
    }

    // 输出排序后的序列
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

