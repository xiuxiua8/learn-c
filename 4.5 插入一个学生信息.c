#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    int class;
    char name[20];
    float score[3];
    float sum; // 总成绩
};

int main() {
    struct Student students[4] = {
        {1001, 11, "zhang", {99.5, 88.5, 89.5}, 0},
        {1002, 22, "li", {77.9, 56.5, 87.5}, 0},
        {1003, 11, "wang", {92.5, 99.0, 60.5}, 0}
    };
    struct Student temp;
    int i, j, n = 3;

    // 输入新学生信息
    printf("请输入学生信息：\\n");
    printf("学号：");
    scanf("%d", &temp.id);
    printf("班级：");
    scanf("%d", &temp.class);
    printf("姓名：");
    scanf("%s", temp.name);
    printf("三门课程的成绩：");
    scanf("%f%f%f", &temp.score[0], &temp.score[1], &temp.score[2]);
    temp.sum = temp.score[0] + temp.score[1] + temp.score[2];

    // 插入新学生信息
    for (i = 0; i < n; i++) {
        if (temp.sum > students[i].sum) {
            for (j = n; j > i; j--) {
                students[j] = students[j - 1];
            }
            students[i] = temp;
            n++;
            break;
        }
    }
    if (i == n) {
        students[n] = temp;
        n++;
    }

    // 按总成绩从高到低排序
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (students[i].sum < students[j].sum) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // 输出排序后的学生信息
    printf("学号,班级,姓名,数学,英语,计算机,总成绩\\n");
    for (i = 0; i < n; i++) {
        printf("%d,%d,%s,%.1f,%.1f,%.1f,%.1f\\n", students[i].id, students[i].class, students[i].name, students[i].score[0], students[i].score[1], students[i].score[2], students[i].sum);
    }

    return 0;
}

