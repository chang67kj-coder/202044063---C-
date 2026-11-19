#include <stdio.h>

typedef struct {
    char name[50];
    int score;
} Student;

int main() {
    int count;
    Student s;
    FILE *fp, *pass, *fail;

    scanf("%d", &count);

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        scanf("%49s %d", s.name, &s.score);
        fprintf(fp, "%s %d\n", s.name, s.score);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    pass = fopen("pass.txt", "w");
    fail = fopen("fail.txt", "w");

    if (fp == NULL || pass == NULL || fail == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    while (fscanf(fp, "%49s %d", s.name, &s.score) == 2) {
        if (s.score >= 80) {
            fprintf(pass, "%s %d\n", s.name, s.score);
        }
        else {
            fprintf(fail, "%s %d\n", s.name, s.score);
        }
    }

    fclose(fp);
    fclose(pass);
    fclose(fail);

    return 0;
}