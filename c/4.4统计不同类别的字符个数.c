#include <stdio.h>

int main() {
    int letter = 0, digit = 0, space = 0, other = 0;
    char c;

    while ((c = getchar()) != '\r' && c != '\n') {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            letter++;
        } else if (c >= '0' && c <= '9') {
            digit++;
        } else if (c == ' ') {
            space++;
        } else {
            other++;
        }
    }

    printf("%d %d %d %d", letter, digit, space, other);
    return 0;
}
