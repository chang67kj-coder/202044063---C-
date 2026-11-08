
#include <stdio.h>

int main(void) {
    double width, height;
    char answer;

    do {
        scanf("%lf %lf", &width, &height);

        printf("Triangle width = %.1f\n", width * height / 2);

        printf("Continue? ");
        scanf(" %c", &answer);

    } while (answer == 'Y' || answer == 'y');

    return 0;
}
