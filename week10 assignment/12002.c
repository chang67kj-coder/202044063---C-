#include <stdio.h>

int main(void) {
    int scores[4][3];
    int row_sums[4] = {0, };
    int total_sum = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
            row_sums[i] += scores[i][j];
            total_sum += scores[i][j];
        }
    }
    
    for (int i = 0; i < 4; i++) {
        printf("%d\n", row_sums[i]);
    }
    printf("%d\n", total_sum);
    
    return 0;
}