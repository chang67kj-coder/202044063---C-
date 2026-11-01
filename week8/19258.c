
#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 2; i <= 6; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    return 0;
}
