
#include <stdio.h>

int main(void) {
    int x = 50;
    scanf("%d", &x);  // [A]

    if (x >= 80) {
        x += 10;      // [B]
    } else {
        x -= 5;       // [B]
    }

    x--;              // [C]

    int A = 50;
    int B = 75;
    int C = 70;

    printf("%d %d %d\n", A, B, C);

    return 0;
}
