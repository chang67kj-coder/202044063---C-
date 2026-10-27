
#include <stdio.h>

int main(void) {
    int score;

    scanf("%d", &score);

    if (score >= 90) {
        printf("Excellent\n");
    } else if (score >= 80) {
        printf("Good\n");
    } else if (score >= 70) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
