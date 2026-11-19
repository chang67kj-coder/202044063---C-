
#include <stdio.h>
#include <string.h>

struct Person {
    char name[101];
    char tel[101];
    char addr[101];
};

int main()
{
    struct Person people[3];
    int min = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%100s %100s %100s",
              people[i].name,
              people[i].tel,
              people[i].addr);
    }

    for (int i = 1; i < 3; i++) {
        if (strcmp(people[i].name, people[min].name) < 0) {
            min = i;
        }
    }

    printf("name : %s\n", people[min].name);
    printf("tel : %s\n", people[min].tel);
    printf("addr : %s\n", people[min].addr);

    return 0;
}
