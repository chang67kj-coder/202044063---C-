#include <stdio.h>

int main(void) {
    int n;
    int i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // 공백 출력
        for (j = 1; j <= i - 1; j++) {
            printf(" ");
        }

        // 별 출력
        for (j = 1; j <= n - i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}