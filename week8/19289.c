#include <stdio.h>

int main(void) {
    int n;
    int i, j;

    scanf("%d", &n);

    // 위쪽: 별 증가
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("# ");
        }
        printf("\n");
    }

    // 아래쪽: 공백 증가, 별 감소
    for (i = n - 1; i >= 1; i--) {

        // 왼쪽 공백
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // 별 출력
        for (j = 1; j <= i; j++) {
            printf("# ");
        }

        printf("\n");
    }

    return 0;
}