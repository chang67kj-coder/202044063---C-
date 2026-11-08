#include <stdio.h>

int main(void) {
    int scores[5][4];
    int sums[5] = {0, };
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
            sums[i] += scores[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++) {
        double avg = (double)sums[i] / 4.0;
        printf("%d %.1f\n", sums[i], avg);
    }
    
    return 0;
}