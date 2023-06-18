#include <stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--) {
        printf("%d", a[i]);
        if ((i != 0) && ((n - i) % 5 == 0)) {
            printf("\n"); // 每输出5个数换一行
        } else {
            printf(" "); // 否则用空格分隔
        }
    }
    return 0;
}
