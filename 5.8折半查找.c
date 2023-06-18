//5.8’€∞Î≤È’“
#include <stdio.h>

#define MAX 20

int main() {
    int n, arr[MAX], num, left, right, mid;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == num) {
            printf("%d\n", mid + 1);
            return 0;
        }
        if (arr[mid] > num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("0\n");
    return 0;
}

