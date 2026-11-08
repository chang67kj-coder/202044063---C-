
#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    int step = (a <= b) ? 1 : -1;

    for (int j = 1; j <= 9; j++) {
        for (int i = a; ; i += step) {
            printf("%d * %d = %2d", i, j, i * j);

            if (i != b) {
                printf("   ");
            }

            if (i == b) {
                break;
            }
        }
        printf("\n");
    }

    return 0;
}
