#include <stdio.h>

int main() {
    int count[11] = {0}; 
    int score;

    while (1) {
        printf("점수 입력 (0 입력 시 종료): ");
        scanf("%d", &score);

        if (score == 0) {
            break;
        }

        if (score > 0 && score <= 100) {
            count[score / 10]++;
        } else {
            printf("1부터 100 사이의 점수를 입력하세요.\n");
        }
    }

    printf("\n[점수대별 학생 수]\n");
    for (int i = 10; i >= 0; i--) {
        if (count[i] > 0) {
            if (i == 10) {
                printf("100점: %d명\n", count[i]);
            } else {
                printf("%d~%d점: %d명\n", i * 10, i * 10 + 9, count[i]);
            }
        }
    }

    return 0;
}