
#include <stdio.h>

int main(void) {
    int a, b, i;
    int sum = 0, count = 0;
    double avg;

    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }

    avg = (double)sum / count;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
