//4.3 对一个已排序的字符数组中插入一个字符

#include <stdio.h>
#include <string.h>

void StrInsert(char a[], char c);

int main()
{
    char str[20];
    char ch;

    // 输入有序字符串和要插入的字符
    printf("Please enter a sorted string with length less than 10:\n");
    scanf("%s", str);
    printf("Please enter a character to insert:\n");
    scanf(" %c", &ch);

    // 调用 StrInsert 函数插入字符
    StrInsert(str, ch);

    // 输出插入后的字符串
    printf("The modified string is: %s\n", str);

    return 0;
}




void StrInsert(char a[], char c)
{
    int len = strlen(a);
    int i;

    // 从后往前遍历数组，如果当前字符大于要插入的字符，则向后移动一位
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

    // 在空出的位置插入字符
    a[i+1] = c;
}
