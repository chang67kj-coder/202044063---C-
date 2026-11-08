
#include <stdio.h>

int main(void) {
    int num;
    int cnt = 0;
    int sum = 0;
    double avg;

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        cnt++;
        sum += num;
    }

    avg = (double)sum / cnt;

    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", avg);

    return 0;
}
