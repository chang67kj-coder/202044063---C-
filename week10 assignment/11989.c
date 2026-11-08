#include <stdio.h>

int main(void) {
    int arr[100];
    scanf("%d", &arr[1]);
    
    arr[0] = 100;
    
    int i = 1;
    while (1) {
        int next = arr[i - 1] - arr[i];
        arr[i + 1] = next;
        i++;
        if (next < 0) {
            break;
        }
    }
    
    for (int j = 0; j <= i; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    
    return 0;
}