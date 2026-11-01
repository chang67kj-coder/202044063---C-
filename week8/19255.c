
#include <stdio.h>

int main(void) {
    int score;
    int sum = 0;
    double avg;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &score);
        sum += score;
    }

    avg = (double)sum / 5;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
