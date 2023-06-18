#include <stdio.h>
#include <string.h>

int main() {
    char ciphertext[100];
    scanf("%[^\n]", ciphertext);

    int length = strlen(ciphertext);
    int start = 0;
    int end = length - 1;

    while (start <= end) {
        printf("%c", ciphertext[start]);
        if (start != end) {
            printf("%c", ciphertext[end]);
        }
        start++;
        end--;
    }

    printf("\n");

    return 0;
}

