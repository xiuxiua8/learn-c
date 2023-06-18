#include <stdio.h>

void Sort(int *p, int n);
int Search(int *p, int n, int key);

int main() {
    int arr[100], key[5], n, i, idx;

    // 输入数组元素
    printf("请输入数组元素（以-9999结束）：\\n");
    for (n = 0; n < 100; n++) {
        scanf("%d", &arr[n]);
        if (arr[n] == -9999) {
            break;
        }
    }

    // 输入待查找元素
    printf("请输入待查找元素：\\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &key[i]);
    }

    // 调用排序函数
    Sort(arr, n);

    // 调用查找函数
    for (i = 0; i < 5; i++) {
        idx = Search(arr, n, key[i]);
        printf("%d\\n", idx);
    }

    return 0;
}

void Sort(int *p, int n) {
    int i, j, tmp;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (p[i] > p[j]) {
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}

int Search(int *p, int n, int key) {
    int left = 0, right = n-1, mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (p[mid] == key) {
            return mid;
        }
        else if (p[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

