
#include <stdio.h>

int main(void) {
    for (int i = 10; i <= 20; i++) {
        printf("%d", i);

        if (i < 20) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
