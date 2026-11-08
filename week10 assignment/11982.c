#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 0;
    
    for (int i = 0; i < 100; i++) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        arr[i] = n;
        count++;
    }
    
    int multi_count = 0;
    int sum = 0;
    
    for (int i = 0; i < count; i++) {
        if (arr[i] % 5 == 0) {
            multi_count++;
            sum += arr[i];
        }
    }
    
    double avg = multi_count > 0 ? (double)sum / multi_count : 0.0;
    
    printf("Multiples of 5 : %d\n", multi_count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);
    
    return 0;
}