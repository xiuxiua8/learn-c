//7.1实现学生信息的录入和输出，要求使用结构体实现。
#include <stdio.h>

// 定义学生信息结构体
struct Student {
    int studentId;
    int classId;
    char name[20];
    double score1;
    double score2;
    double score3;
    double totalScore;
};

// 录入学生信息函数
void inputStudentInfo(struct Student* student) {
    scanf("%d", &(student->studentId));
    scanf("%d", &(student->classId));
    scanf("%s", student->name);
    scanf("%lf", &(student->score1));
    scanf("%lf", &(student->score2));
    scanf("%lf", &(student->score3));
    student->totalScore = student->score1 + student->score2 + student->score3;
}

// 根据学生总成绩排序函数
void sortStudentsByTotalScore(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].totalScore > students[j + 1].totalScore) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 3;  // 学生人数，此处为3个学生
    struct Student students[n];

    // 录入学生信息
    for (int i = 0; i < n; i++) {
        inputStudentInfo(&students[i]);
    }

    // 根据学生总成绩排序
    sortStudentsByTotalScore(students, n);

    // 输出学生信息
    for (int i = 0; i < n; i++) {
        printf("%d,%d,%s,%.1lf,%.1lf,%.1lf,%.1lf\n", students[i].studentId, students[i].classId,
               students[i].name, students[i].score1, students[i].score2, students[i].score3,
               students[i].totalScore);
    }

    return 0;
}

