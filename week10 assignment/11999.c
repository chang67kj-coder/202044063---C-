#include <stdio.h>

int main(void) {
    int count[11] = {0, };
    
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        count[n / 10]++;
    }
    
    for (int i = 10; i >= 0; i--) {
        if (count[i] > 0) {
            printf("%d : %d\n", i * 10, count[i]);
        }
    }
    
    return 0;
}