//7.1ʵ��ѧ����Ϣ��¼��������Ҫ��ʹ�ýṹ��ʵ�֡�
#include <stdio.h>

// ����ѧ����Ϣ�ṹ��
struct Student {
    int studentId;
    int classId;
    char name[20];
    double score1;
    double score2;
    double score3;
    double totalScore;
};

// ¼��ѧ����Ϣ����
void inputStudentInfo(struct Student* student) {
    scanf("%d", &(student->studentId));
    scanf("%d", &(student->classId));
    scanf("%s", student->name);
    scanf("%lf", &(student->score1));
    scanf("%lf", &(student->score2));
    scanf("%lf", &(student->score3));
    student->totalScore = student->score1 + student->score2 + student->score3;
}

// ����ѧ���ܳɼ�������
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
    int n = 3;  // ѧ���������˴�Ϊ3��ѧ��
    struct Student students[n];

    // ¼��ѧ����Ϣ
    for (int i = 0; i < n; i++) {
        inputStudentInfo(&students[i]);
    }

    // ����ѧ���ܳɼ�����
    sortStudentsByTotalScore(students, n);

    // ���ѧ����Ϣ
    for (int i = 0; i < n; i++) {
        printf("%d,%d,%s,%.1lf,%.1lf,%.1lf,%.1lf\n", students[i].studentId, students[i].classId,
               students[i].name, students[i].score1, students[i].score2, students[i].score3,
               students[i].totalScore);
    }

    return 0;
}

