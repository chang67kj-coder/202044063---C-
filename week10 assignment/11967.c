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
    
    for (int i = 1; i < count; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}