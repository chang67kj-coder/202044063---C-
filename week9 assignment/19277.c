#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 1; i <= 5; i++) {

        // 공백 출력
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // 별 출력
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}