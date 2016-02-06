#include <stdio.h>

int main() {
    char c;
    int is_first = 1;
    while (scanf("%c", &c) != EOF) {
        if (c == '"') {
            if (is_first) {
                printf("``");
            } else {
                printf("''");
            }
            is_first = 1 - is_first;
        } else {
            printf("%c", c);
        }
    }
    return 0;
}
