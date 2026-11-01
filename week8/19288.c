#include <stdio.h>

int main(void) {
    int n;
    int i, j;
    int num = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // 공백 출력
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        // 숫자 출력
        for (j = i; j <= n; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}