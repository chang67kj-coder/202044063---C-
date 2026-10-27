
#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Happy.\n");
    } else {
        printf("Lonely.\n");
    }

    return 0;
}
