
#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0) {
            printf("Even Number\n");
        } else {
            printf("Odd Number\n");
        }
    } else {
        printf("Non positive\n");
    }

    return 0;
}
