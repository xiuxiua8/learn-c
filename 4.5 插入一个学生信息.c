#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    int class;
    char name[20];
    float score[3];
    float sum; // �ܳɼ�
};

int main() {
    struct Student students[4] = {
        {1001, 11, "zhang", {99.5, 88.5, 89.5}, 0},
        {1002, 22, "li", {77.9, 56.5, 87.5}, 0},
        {1003, 11, "wang", {92.5, 99.0, 60.5}, 0}
    };
    struct Student temp;
    int i, j, n = 3;

    // ������ѧ����Ϣ
    printf("������ѧ����Ϣ��\\n");
    printf("ѧ�ţ�");
    scanf("%d", &temp.id);
    printf("�༶��");
    scanf("%d", &temp.class);
    printf("������");
    scanf("%s", temp.name);
    printf("���ſγ̵ĳɼ���");
    scanf("%f%f%f", &temp.score[0], &temp.score[1], &temp.score[2]);
    temp.sum = temp.score[0] + temp.score[1] + temp.score[2];

    // ������ѧ����Ϣ
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

    // ���ܳɼ��Ӹߵ�������
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (students[i].sum < students[j].sum) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // ���������ѧ����Ϣ
    printf("ѧ��,�༶,����,��ѧ,Ӣ��,�����,�ܳɼ�\\n");
    for (i = 0; i < n; i++) {
        printf("%d,%d,%s,%.1f,%.1f,%.1f,%.1f\\n", students[i].id, students[i].class, students[i].name, students[i].score[0], students[i].score[1], students[i].score[2], students[i].sum);
    }

    return 0;
}

