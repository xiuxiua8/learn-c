//5.12ͳ�Ƹ����ַ�����
#include <stdio.h>

void Stat(char *p, int *pA, int *pa, int *pd, int *ps, int *pother) {
    int i;

    *pA = *pa = *pd = *ps = *pother = 0;

    for (i = 0; p[i] != '\\0'; i++) {
        if (p[i] >= 'A' && p[i] <= 'Z') {
            (*pA)++;
        }
        else if (p[i] >= 'a' && p[i] <= 'z') {
            (*pa)++;
        }
        else if (p[i] >= '0' && p[i] <= '9') {
            (*pd)++;
        }
        else if (p[i] == ' ') {
            (*ps)++;
        }
        else {
            (*pother)++;
        }
    }
}

int main() {
    char input[81];
    int A, a, d, s, other;

    printf("�������һ�����֣�\\n");
    gets(input);
    Stat(input, &A, &a, &d, &s, &other);

    printf("������ڶ������֣�\\n");
    gets(input);
    Stat(input, &A, &a, &d, &s, &other);

    printf("��������������֣�\\n");
    gets(input);
    Stat(input, &A, &a, &d, &s, &other);

    printf("%d %d %d %d %d\\n", A, a, d, s, other);

    return 0;
}

