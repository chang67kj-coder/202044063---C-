#include <stdio.h>

int main(void) {
    int arr[10];
    int even_sum = 0;
    int odd_sum = 0;
    int odd_count = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if ((i + 1) % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
            odd_count++;
        }
    }
    
    double odd_avg = (double)odd_sum / odd_count;
    
    printf("sum : %d\n", even_sum);
    printf("avg : %.1f\n", odd_avg);
    
    return 0;
}