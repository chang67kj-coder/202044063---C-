#include <stdio.h>

int main(void) {
    int n;
    int i, j;

    scanf("%d", &n);

    // 별 감소
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 별 증가
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}