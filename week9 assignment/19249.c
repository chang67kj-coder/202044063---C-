
#include <stdio.h>

int main(void) {
    for (int i = 1; i < 20; i += 2) {
        printf("%d", i);

        if (i < 19) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
