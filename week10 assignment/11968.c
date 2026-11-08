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
    
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}