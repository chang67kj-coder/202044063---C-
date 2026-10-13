#include <stdio.h>

#define MAX_SIZE 50

void sort(int* p, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int score[MAX_SIZE];
    int* p;
    int n, i;

    printf("학생 수 입력: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_SIZE) {
        printf("잘못된 학생 수입니다.\n");
        return 0;
    }

    p = score;

    for (i = 0; i < n; i++) {
        printf("%d번째 학생 성적 입력: ", i + 1);
        scanf("%d", p + i);
    }

    sort(p, n);

    printf("정렬된 성적: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n최고 성적: %d", *(p + n - 1));
    printf("\n최하 성적: %d\n", *p);

    return 0;
}