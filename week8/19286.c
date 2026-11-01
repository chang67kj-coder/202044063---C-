#include <stdio.h>

int main(void) {
    int n;
    int i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // 공백 출력
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // 숫자 출력
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}