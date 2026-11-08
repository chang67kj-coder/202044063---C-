
#include <stdio.h>

int main(void) {
    int num;
    int max = 0;
    int min = 101;

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num < 1 || num > 100) {
            continue;
        }

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }
    }

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);

    return 0;
}
