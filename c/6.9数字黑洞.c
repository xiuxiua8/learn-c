//6.9���ֺڶ�

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
    printf("������һ����Ȼ����");
    scanf("%d", &n);
    printf("���� %d �α任�ɵõ���Ȼ��1��\n", black_hole(n));
    return 0;
}


