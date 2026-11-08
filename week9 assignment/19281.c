#include <stdio.h>

int main(void) {
    int i, j;
    char ch = 'a';
    int num = 1;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 5; j++) {
            if (j <= i) {
                printf("%c ", ch);
                ch++;
            }
            else {
                printf("%d ", num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}