#include <stdio.h>

int main() {
    int first_day, total_days;
    printf("��������µ�1�������ڼ�(1��ʾ����һ��2��ʾ���ڶ����Դ�����)��");
    scanf("%d", &first_day);
    printf("��������µ�������");
    scanf("%d", &total_days);

    printf("mon\ttue\twed\tthu\tfri\tsat\tsun\n");

    int i, j, day = 1;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 7; j++) {
            if (i == 1 && j < first_day) {
                printf(" \t");
            } else if (day <= total_days) {
                printf("%d\t", day);
                day++;
            } else {
                printf(" \t");
            }
        }
        printf("\n");
        if (day > total_days) {
            break;
        }
    }

    if (day <= total_days) {
        for (j = 1; j <= 7; j++) {
            if (day <= total_days) {
                printf("%d\t", day);
                day++;
            } else {
                printf(" \t");
            }
        }
        printf("\n");
    }

    return 0;
}

