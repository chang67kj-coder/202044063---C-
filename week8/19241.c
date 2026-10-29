
#include <stdio.h>

int main(void) {
    int score;
    int sum = 0;
    int cnt = 0;
    double avg;

    while (1) {
        scanf("%d", &score);

        if (score < 0 || score > 100) {
            break;
        }

        sum += score;
        cnt++;
    }

    avg = (double)sum / cnt;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
