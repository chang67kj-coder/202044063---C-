
#include <stdio.h>

int main(void) {
    int num;
    int small = 0;
    int large = 0;

    while (1) {
        scanf("%d", &num);

        if (num >= 100) {
            large++;
            break;
        }

        if (num < 50) {
            small++;
        } else {
            large++;
        }
    }

    printf("small : %d\n", small);
    printf("large : %d\n", large);

    return 0;
}
