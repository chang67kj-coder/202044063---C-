#include <stdio.h>

int main(void) {
    int arr[4][2];
    int total_sum = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            total_sum += arr[i][j];
        }
    }
    
    for (int i = 0; i < 4; i++) {
        int row_avg = (arr[i][0] + arr[i][1]) / 2;
        printf("%d ", row_avg);
    }
    printf("\n");
    
    for (int j = 0; j < 2; j++) {
        int col_avg = (arr[0][j] + arr[1][j] + arr[2][j] + arr[3][j]) / 4;
        printf("%d ", col_avg);
    }
    printf("\n");
    
    int total_avg = total_sum / 8;
    printf("%d\n", total_avg);
    
    return 0;
}