#include <stdio.h>
#include <string.h>

int main() {
    char word[5];
    int k;
    int i;

    printf("������һ��4��ĸ��СдӢ�ĵ��ʺ�����k��\n");
    scanf("%s %d", word, &k);

    for (i = 0; i < strlen(word); i++) {
        word[i] = (word[i] - 'a' + k) % 26 + 'a';
    }

    printf("%s\n", word);

    return 0;
}

