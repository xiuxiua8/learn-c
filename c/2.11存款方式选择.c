#include <stdio.h>
#include <math.h>

int main()
{
    double principal, interest_rate, interest, balance;
    double term1, term2, term3, term4, term5;

    // ���뱾��
    printf("�����뱾��");
    scanf("%lf", &principal);

    // ���㶨��5�걾Ϣ��
    interest_rate = 0.03;
    interest = principal * pow(1 + interest_rate, 5);
    balance = principal + interest;
    printf("%.6f ", balance);

    // �����ȴ����꣬���ں�Ϣ�ٴ�3�걾Ϣ��
    interest_rate = 0.021;
    term1 = principal * pow(1 + interest_rate, 2);
    interest_rate = 0.03;
    term2 = (principal + term1) * pow(1 + interest_rate, 3);
    balance = term1 + term2;
    printf("%.6f ", balance);

    // �����ȴ�3�꣬���ں�Ϣ�ٴ�2�걾Ϣ��
    interest_rate = 0.0275;
    term1 = principal * pow(1 + interest_rate, 3);
    interest_rate = 0.03;
    term2 = (principal + term1) * pow(1 + interest_rate, 2);
    balance = term1 + term2;
    printf("%.6f ", balance);

    // �����1�꣬���ڱ�Ϣ�ٴ�1�꣬������5�걾Ϣ��
    interest_rate = 0.015;
    term1 = principal * pow(1 + interest_rate, 1);
    interest_rate = 0.03;
    term2 = (principal + term1) * pow(1 + interest_rate, 1);
    term3 = term2 * pow(1 + interest_rate, 3);
    balance = term1 + term2 + term3;
    printf("%.6f ", balance);

    // �������ÿ���Ƚ���һ�Σ�������Ϣ�������ڱ���ı�Ϣ��
    interest_rate = 0.0035;
    balance = principal;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            balance += balance * interest_rate;
        }
    }
    printf("%.6f", balance);

    return 0;
}

