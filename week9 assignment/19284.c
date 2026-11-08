#include <stdio.h>

int main(void) {
    int n;
    int i, j;

    scanf("%d", &n);

    // 별 감소
    for (i = 1; i <= n; i++) {

        // 공백 출력
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // 별 출력
        for (j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // 별 증가
    for (i = n - 1; i >= 1; i--) {

        // 공백 출력
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // 별 출력
        for (j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}