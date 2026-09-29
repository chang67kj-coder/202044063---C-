#include <stdio.h>

int main() {
  
    int count[7] = {0}; 
    int number;

    for (int i = 1; i <= 10; i++) {
        printf("%d번째 주사위 숫자 입력 (1~6): ", i);
        scanf("%d", &number);

        
        if (number >= 1 && number <= 6) {
            count[number]++; 
        } else {
            printf("1부터 6 사이의 숫자만 입력해주세요.\n");
            i--; 
        }
    }

    printf("\n결과 출력\n");
    for (int i = 1; i <= 6; i++) {
        printf("%d: %d번\n", i, count[i]);
    }

    return 0;
}