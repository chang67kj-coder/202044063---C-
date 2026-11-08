#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    int arr[100];
    int max;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0 || arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}