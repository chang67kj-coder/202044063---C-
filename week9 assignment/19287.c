#include <stdio.h>

int main(void) {
    int n;
    int i, j;
    char ch = 'A';
    int num = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {

            if (i + j <= n + 1) {
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