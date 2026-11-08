#include <stdio.h>

int main(void) {
    int arr[10];
    int max, min;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (i == 0) {
            max = arr[i];
            min = arr[i];
        } else {
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
        }
    }
    
    printf("%d %d\n", max, min);
    
    return 0;
}