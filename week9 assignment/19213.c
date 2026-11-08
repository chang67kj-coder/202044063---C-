
#include <stdio.h>

int main(void) {
    int menu;

    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");
    printf("Select:\n");

    scanf("%d", &menu);

    if (menu == 1) {
        printf("You selected ADD.\n");
    } else if (menu == 2) {
        printf("You selected EDIT.\n");
    } else if (menu == 3) {
        printf("You selected DEL.\n");
    } else {
        printf("Wrong choice.\n");
    }

    return 0;
}
