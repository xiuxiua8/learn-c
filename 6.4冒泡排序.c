#include <stdio.h>

void BubbleSort(int *p, int n) {
    int i, j, temp;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (*(p+j) > *(p+j+1)) {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}

int main() {
    int n, i, a[20];

    // 输入数组元素
    printf("请输入n和n个整数：\\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 调用排序函数
    BubbleSort(a, n);

    // 输出排序结果
    printf("排序结果：\\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\\n");

    return 0;
}

