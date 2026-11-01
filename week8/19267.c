
#include <stdio.h>

int main(void) {
    int n;
    int i;

    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }

    printf("\n");

    return 0;
}
