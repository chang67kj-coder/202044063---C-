#include <stdio.h>

int main(void) {
    int arr[10];
    int min;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (i == 0 || arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("%d\n", min);
    
    return 0;
}