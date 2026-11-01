
#include <stdio.h>

int main(void) {
    int i, j;

    for (j = 1; j <= 9; j++) {
        for (i = 2; i <= 4; i++) {
            printf("%d * %d = %2d", i, j, i * j);

            if (i < 4) {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
