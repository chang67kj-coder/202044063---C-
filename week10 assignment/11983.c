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
    
    printf("%d\n", count);
    
    for (int i = 0; i < count; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i] * 2);
        } else {
            printf("%d ", arr[i] / 2);
        }
    }
    printf("\n");
    
    return 0;
}