//4.3 ��һ����������ַ������в���һ���ַ�

#include <stdio.h>
#include <string.h>

void StrInsert(char a[], char c);

int main()
{
    char str[20];
    char ch;

    // ���������ַ�����Ҫ������ַ�
    printf("Please enter a sorted string with length less than 10:\n");
    scanf("%s", str);
    printf("Please enter a character to insert:\n");
    scanf(" %c", &ch);

    // ���� StrInsert ���������ַ�
    StrInsert(str, ch);

    // ����������ַ���
    printf("The modified string is: %s\n", str);

    return 0;
}




void StrInsert(char a[], char c)
{
    int len = strlen(a);
    int i;

    // �Ӻ���ǰ�������飬�����ǰ�ַ�����Ҫ������ַ���������ƶ�һλ
    for (i = len; i >= 0; i--)
    {
        if (a[i] > c)
        {
            a[i+1] = a[i];
        }
        else
        {
            break;
        }
    }

    // �ڿճ���λ�ò����ַ�
    a[i+1] = c;
}
