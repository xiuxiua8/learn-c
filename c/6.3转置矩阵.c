#include <stdio.h>

void Trans(int A[][10], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
}

int main() {
    int n, i, j;
    int A[10][10];

    // ¶ÁÈë¾ØÕó
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // ×ªÖÃ¾ØÕó
    Trans(A, n);

    // Êä³ö¾ØÕó
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", A[i][j]);
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

