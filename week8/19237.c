
#include <stdio.h>

int main(void) {
    int n, x;

    scanf("%d", &n);

    x = n + 3;
    printf("%d\n", x);

    x--;
    printf("%d ", x);

    x -= 2;
    printf("%d ", x);

    x += 3;
    printf("%d\n", x);

    return 0;
}
