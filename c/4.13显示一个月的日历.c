#include <stdio.h>

int main() {
    int first_day, total_days;
    printf("请输入该月的1号是星期几(1表示星期一，2表示星期二，以此类推)：");
    scanf("%d", &first_day);
    printf("请输入该月的天数：");
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

