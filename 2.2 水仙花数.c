#include <stdio.h>

int main() {
    int i, j, k;
    int num, sum;

    for (i = 1; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            for (k = 0; k <= 9; k++) {
                num = i*100 + j*10 + k;
                sum = i*i*i + j*j*j + k*k*k;
                if (num == sum) {
                    printf("%d=%d^3+%d^3+%d^3\n", num, i, j, k);
                }
            }
        }
    }

    return 0;
}
