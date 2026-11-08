#include <stdio.h>

int main(void) {
    int count[7] = {0, };
    
    for (int i = 0; i < 10; i++) {
        int n;
        scanf("%d", &n);
        count[n]++;
    }
    
    for (int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, count[i]);
    }
    
    return 0;
}