#include <stdio.h>
#include <math.h>

int main()
{
    double principal, interest_rate, interest, balance;
    double term1, term2, term3, term4, term5;

    // 输入本金
    printf("请输入本金：");
    scanf("%lf", &principal);

    // 计算定期5年本息和
    interest_rate = 0.03;
    interest = principal * pow(1 + interest_rate, 5);
    balance = principal + interest;
    printf("%.6f ", balance);

    // 计算先存两年，到期后本息再存3年本息和
    interest_rate = 0.021;
    term1 = principal * pow(1 + interest_rate, 2);
    interest_rate = 0.03;
    term2 = (principal + term1) * pow(1 + interest_rate, 3);
    balance = term1 + term2;
    printf("%.6f ", balance);

    // 计算先存3年，到期后本息再存2年本息和
    interest_rate = 0.0275;
    term1 = principal * pow(1 + interest_rate, 3);
    interest_rate = 0.03;
    term2 = (principal + term1) * pow(1 + interest_rate, 2);
    balance = term1 + term2;
    printf("%.6f ", balance);

    // 计算存1年，到期本息再存1年，连续存5年本息和
    interest_rate = 0.015;
    term1 = principal * pow(1 + interest_rate, 1);
    interest_rate = 0.03;
    term2 = (principal + term1) * pow(1 + interest_rate, 1);
    term3 = term2 * pow(1 + interest_rate, 3);
    balance = term1 + term2 + term3;
    printf("%.6f ", balance);

    // 计算活期每季度结算一次，结算利息算入下期本金的本息和
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

