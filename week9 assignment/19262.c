
#include <stdio.h>

int main(void) {
    int a, b, i;
    int temp;

    scanf("%d %d", &a, &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
