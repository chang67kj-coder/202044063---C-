#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int number, count = 0, product = 1;

    printf("\n정수 입력: ");
    scanf("%d", &number);
    printf("당신이 입력한 수: %d\n\n", number);

    while (number != 0) {
        count++;
        product *= number % 10;
        number /= 10;
    }

    printf("정수의 각 자릿수 개수: %d\n", count);
    printf("입력한 숫자의 각 자릿수 곱: %d\n", product);

    return 0;
}